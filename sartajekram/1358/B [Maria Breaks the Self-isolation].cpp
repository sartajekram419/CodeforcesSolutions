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
    ll n,a,p[200005],ans,i,c;
    while(t--)
    {
        cin >> n;
        ans=1;
        for(i=0;i<=n+1;i++)p[i]=0;
        for(i=0;i<n;i++)
        {
            cin >> a;
            p[a]++;
        }
        c=0;
        for(i=1;i<=n;i++)
        {
            if(p[i]>i-ans-c)
            {
                ans=ans+p[i]+c;
                c=0;
            }
            else c=c+p[i];
        }
        cout << ans << "\n";
    }

    return 0;
}
