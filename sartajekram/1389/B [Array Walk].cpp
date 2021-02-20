#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

ll n,k,z,a[100005],s,m,ans;


int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll i,j,r;
    while(t--)
    {
        cin >> n >> k >> z;
        for(i=1;i<=n;i++)cin >> a[i];
        //a[n]=0;
        ans=0;
        for(i=0;i<=z;i++)
        {
            r=k+1-2*i;
            if(r<=0)continue;
            s=m=0;
            for(j=1;j<=r;j++)
            {
                s=s+a[j];
                m=max(m,a[j]+a[j+1]);
            }
            s=s+m*i;
            ans=max(ans,s);
        }
        cout << ans << "\n";
    }

    return 0;
}


