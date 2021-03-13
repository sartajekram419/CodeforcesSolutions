#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define PI acos(-1.0)
#define mod 1000000007
 
typedef pair<ll, ll> pi;
 
ll n,m,k;
ll dis[100005],in[100005];
vector<pi>g[100005];
vector<pi>v;
 
void initialize()
{
    for(ll i=0;i<=n;i++)dis[i]=inf,in[i]=0;
}
 
void dijkstra()
{
        dis[1]=0;
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        pq.push({0,1});
 
        while(!pq.empty())
        {
            pair<int,int>p=pq.top();
            pq.pop();
            ll u=p.second;
            ll w=p.first;
            if(w!=dis[u])continue;
 
            ll l=g[u].size(),i;
 
            for(i=0;i<l;i++)
            {
                ll x=g[u][i].first;
                ll w=g[u][i].second;
 
                if(dis[x]>dis[u]+w)
                {
                    dis[x]=dis[u]+w;
                    pq.push({dis[x],x});
                    in[x]=1;
                }
                else if(dis[x]==dis[u]+w)
                {
                    in[x]++;
                }
            }
        }
}
 
 
int main(void)
{
        fastio;
 
        ll a,b,c,i,ans=0;
 
        cin >> n >> m >> k;
 
        initialize();
 
        while(m--)
        {
            cin >> a >> b >> c;
            g[a].push_back({b,c});
            g[b].push_back({a,c});
        }
 
        for(i=0;i<k;i++)
        {
            cin >> a >> b;
            g[1].push_back({a,b});
            //g[a].push_back({1,b});
            v.push_back({a,b});
        }
 
        dijkstra();
 
        for(i=0;i<k;i++)
        {
            pi p=v[i];
 
            if(dis[p.first]<p.second)ans++;
            else if(dis[p.first]==p.second && in[p.first]>1){ans++;in[p.first]--;}
        }
 
        cout << ans;
 
        return 0;
}