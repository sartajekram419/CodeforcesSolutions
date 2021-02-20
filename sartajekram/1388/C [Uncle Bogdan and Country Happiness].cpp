#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

vector<ll>v[100005];
bool ind,vis[100005];
ll n,m,p[100005],h[100005];

ll dfs(ll node)
{
    ll c=0,i,l,x;
    l=v[node].size();
    vis[node]=1;
    for(i=0;i<l;i++)
    {
        if(vis[v[node][i]]==0)
        {
            c=c+dfs(v[node][i]);
            p[node]+=p[v[node][i]];
        }
        if(ind==0)return 0;
    }
    x=p[node]+h[node];
    if(x%2)ind=0;
    else x=x/2;
    if(x<c)ind=0;
    if(x<0)ind=0;
    if(x>p[node])ind=0;

    return x;
}

int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll a,b,i;

    while(t--)
    {
        cin >> n >> m;
        for(i=1;i<=n;i++){cin >> p[i];vis[i]=0;}
        for(i=1;i<=n;i++)cin >> h[i];
        for(i=1;i<n;i++)
        {
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        ind=1;
        dfs(1);
        if(ind)cout << "YES\n";
        else cout << "NO\n";
        for(i=0;i<=n;i++)v[i].clear();
    }

    return 0;
}

