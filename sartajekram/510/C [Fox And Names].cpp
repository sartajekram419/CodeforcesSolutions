#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

vector<int>v[26],ans;
int degree[26];
queue<int>q;

int main(void)
{
    fastio;

    int n,i,j,l,r;
    bool ind=0;
    cin >> n;
    string s[105];
    for(i=0;i<n;i++)cin >> s[i];

    for(i=0;i<n-1;i++)
    {
        l=s[i].size();
        r=s[i+1].size();
        for(j=0;j<l;j++)
        {
            if(j==r){ind=1;break;}
            if(s[i][j]!=s[i+1][j])
            {
                v[s[i][j]-'a'].push_back(s[i+1][j]-'a');
                degree[s[i+1][j]-'a']++;
                break;
            }
        }
    }

    for(i=0;i<26;i++)
    {
        if(degree[i]==0)q.push(i);
    }

    while(!q.empty())
    {
        int u=q.front();
        ans.push_back(u);
        q.pop();
        l=v[u].size();
        for(i=0;i<l;i++)
        {
            if(degree[v[u][i]])
            {
                degree[v[u][i]]--;
                if(degree[v[u][i]]==0)q.push(v[u][i]);
            }
            else
            {
                ind=1;
                break;
            }
        }
        if(ind)break;
    }

    for(i=0;i<26;i++)
    {
        if(degree[i]){ind=1;break;}
    }

    if(ind)cout << "Impossible";
    else
    {
        for(i=0;i<26;i++)cout << (char)(ans[i]+'a');
    }

    return 0;
}


