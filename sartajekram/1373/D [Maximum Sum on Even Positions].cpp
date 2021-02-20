#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

ll dp[200005];

int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll n,a[200005],ans,m,i;
    while(t--)
    {
        ans=0;
        m=0;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            if(i%2==0)
            {
                ans=ans+a[i];
                a[i]=-a[i];
            }
        }
        dp[1]=max((ll)0,a[1]+a[0]);
        m=max(m,dp[1]);
        for(i=2;i<n;i++)
        {
            dp[i]=max((ll)0,dp[i-2]+a[i]+a[i-1]);
            m=max(m,dp[i]);
        }
        cout << ans+m << "\n";
    }

    return 0;

}
