#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main()
{
    fastio;

    int t;
    cin >> t;
    while(t--)
    {
        ll n,m,k,i,j,ans=0,c;
        cin >> n >> m >> k;
        ll a[n+5];
        for(i=0;i<n;i++)cin >> a[i];
        k=min(k,m-1);

        for(i=0;i<=k;i++)
        {
            c=inf;
            for(j=0;j+k<m;j++)
            {
                c=min(max(a[i+j],a[i+j+n-m]),c);
            }
            ans=max(ans,c);
        }
        cout << ans << "\n";
    }

    return 0;
}
