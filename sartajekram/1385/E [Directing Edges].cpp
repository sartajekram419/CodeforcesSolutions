#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 998244353

int n,m,degree[200005],index[200005];
vector<pair<int,int>>ans;
vector<int>dg[200005],tp;

void topsort()
{
    queue<int>q;
    int i,l;
    for(i=1;i<=n;i++)
    {
        if(degree[i]==0)q.push(i);
    }
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        tp.push_back(u);
        l=dg[u].size();
        for(i=0;i<l;i++)
        {
            if(degree[dg[u][i]])
            {
                degree[dg[u][i]]--;
                if(degree[dg[u][i]]==0)q.push(dg[u][i]);
            }
        }
    }
}

int main(void)
{
    fastio;

    int t;
    cin >> t;

    int a,b,c,i;
    while(t--)
    {
        cin >> n >> m;
        for(i=0;i<=n;i++)degree[i]=0;
        for(i=0;i<m;i++)
        {
            cin >> a >> b >> c;

            ans.push_back({b,c});
            if(a)
            {
                dg[b].push_back(c);
                degree[c]++;
            }
        }
        topsort();
        if(tp.size()<n)cout << "NO\n";
        else
        {
            cout << "YES\n";

            for(i=0;i<n;i++)
            {
                index[tp[i]]=i;
            }
            for(i=0;i<m;i++)
            {
                if(index[ans[i].first]>index[ans[i].second])swap(ans[i].first,ans[i].second);
                cout << ans[i].first << " " << ans[i].second << "\n";
            }
        }
        for(i=0;i<=n;i++)dg[i].clear();
        ans.clear();
        tp.clear();
    }

    return 0;
}
