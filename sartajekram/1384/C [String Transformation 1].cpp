#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 998244353

vector<int>v[20];
int vis[20],c;

void dfs(int node)
{
    int i,l=v[node].size();
    c++;
    vis[node]=1;

    for(i=0;i<l;i++)
    {
        if(vis[v[node][i]]==0)dfs(v[node][i]);
    }
}

int main(void)
{
    fastio;

    int t;
    cin >> t;
    int n,i,j,ans;
    string a,b;

    while(t--)
    {
        bool ind=0;
        int ans=0;
        cin >> n >> a >> b;

        for(i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                v[a[i]-'a'].push_back(b[i]-'a');
                v[b[i]-'a'].push_back(a[i]-'a');
            }
            else if(a[i]>b[i]){ind=1;break;}
        }

        for(j=0;j<20;j++)
        {
            vis[j]=0;
        }

        for(i=0;i<20;i++)
        {
            c=0;
            if(vis[i]==0)
            {
                dfs(i);
                ans=ans+c-1;
            }
        }

        if(ind)cout << "-1\n";
        else cout << ans << "\n";

        for(i=0;i<20;i++)v[i].clear();
    }

    return 0;
}
