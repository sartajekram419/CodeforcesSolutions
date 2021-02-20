#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

ll n,s,c[100005],w[100005];
vector<pair<ll,ll>>g[100005];

ll diff(ll x)
{
            return w[x]*c[x]-(w[x]/2)*c[x];
}

void dfs(ll v,ll p)
{

            ll l=g[v].size();
            if(l==1&& p!=-1)c[p]=1;

            for(ll i=0;i<l;i++)
            {
                if(p!=g[v][i].second)
                {
                    dfs(g[v][i].first,g[v][i].second);
                    if(p!=-1)c[p]+=c[g[v][i].second];
                }
            }

}

int main(void)
{

        fastio;

        int t;
        cin >> t;

        while(t--)
        {
                ll i,u,v,ans=0,sum=0;
                pair<ll,ll>p;
                priority_queue<pair<ll,ll>>pq;

                cin >> n >> s;
                for(i=1;i<n;i++)
                {
                        c[i]=0;
                        cin >> u >> v >> w[i];
                        g[u].push_back({v,i});
                        g[v].push_back({u,i});
                }

                dfs(1,-1);

                for(i=1;i<n;i++)
                {
                    pq.push({diff(i),i});
                    sum=sum+w[i]*c[i];
                }

                while(sum>s)
                {
                    p=pq.top();
                    pq.pop();
                    sum=sum-p.first;
                    w[p.second]/=2;
                    pq.push({diff(p.second),p.second});
                    ans++;
                }

                cout << ans << "\n";

                for(i=1;i<=n;i++)g[i].clear();
            }

            return 0;

}
