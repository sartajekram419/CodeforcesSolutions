#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

vector<int>v[250050];
vector<pair<int,int>>a;
vector<pair<int,int>>:: iterator it;
bool vis[250050];
int t=0;

void dfs(int u)
{
    int d,f;
    vis[u]=1;
    d=t;
    t++;
    int l=v[u].size();
    for(int i=0;i<l;i++)
    {
        if(vis[v[u][i]]==0)
        {
            dfs(v[u][i]);
        }
    }
    f=t;
    t++;
    a.push_back(make_pair(f-d,u));
}

void solve(string s[],int u,int n,int m ,int k)
{
    int i,x,r,c;
    dfs(u);
    sort(a.begin(),a.end());
    for(it=a.begin(),i=0;i<k;i++,it++)
    {
        x=it->second;
        r=ceil((double)x/(double)m);
        c=x-(r-1)*m;
        s[r][c]='X';
    }
}

int main()
{
    fastio;

    int n,m,k,i,j,u;
    bool ind=1;
    cin >> n >> m >> k;
    string s[n+5],x;

    for(j=0;j<=m+1;j++)s[0].push_back('$');
    for(i=1;i<=n;i++)
    {
        cin >> x;
        s[i].push_back('$');
        s[i]=s[i]+x;
        s[i].push_back('$');
    }
    for(j=0;j<=m+1;j++)s[n+1].push_back('$');

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(s[i][j]=='.')
            {
                if(ind){u=(i-1)*m+j;ind=0;}
                if(s[i][j-1]=='.')v[(i-1)*m+j].push_back((i-1)*m+j-1);
                if(s[i][j+1]=='.')v[(i-1)*m+j].push_back((i-1)*m+j+1);
                if(s[i+1][j]=='.')v[(i-1)*m+j].push_back(i*m+j);
                if(s[i-1][j]=='.')v[(i-1)*m+j].push_back((i-2)*m+j);
            }
        }
    }

    solve(s,u,n,m,k);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)cout << s[i][j];
        cout << "\n";
    }

    return 0;
}