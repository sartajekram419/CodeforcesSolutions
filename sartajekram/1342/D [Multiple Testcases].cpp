#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int c[200005],p[200005],g[200005],a[200005];
vector<int>v[200005];

int main()
{
    fastio;

    int n,k,i,ans,l,j;
    cin >> n >> k;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
        p[a[i]]++;
    }
    sort(a,a+n);
    for(i=1;i<=k;i++)cin >> c[i];

    g[k]=p[k];
    ans=ceil((double)g[k]/(double)c[k]);
    for(i=k-1;i>0;i--)
    {
        g[i]=p[i]+g[i+1];
        ans=max(ans,(int)ceil((double)g[i]/(double)c[i]));
    }
    cout << ans << "\n";

    for(i=0;i<n;i++)
    {
        v[i%ans].push_back(a[i]);
    }

    for(i=0;i<ans;i++)
    {
        l=v[i].size();
        cout << l << " ";
        for(j=0;j<l;j++)cout << v[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
