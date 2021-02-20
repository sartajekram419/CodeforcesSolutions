#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

ll r,g,b,x[205],y[205],z[205],ans=0;

ll dp[205][205][205];

void solve()
{
    ll i,j,k;

    for(i=0;i<=r;i++)
    {
        for(j=0;j<=g;j++)
        {
            for(k=0;k<=b;k++)
            {
                if(i&&j)dp[i][j][k]=max(dp[i][j][k],dp[i-1][j-1][k]+x[i]*y[j]);
                if(i&&k)dp[i][j][k]=max(dp[i][j][k],dp[i-1][j][k-1]+x[i]*z[k]);
                if(j&&k)dp[i][j][k]=max(dp[i][j][k],dp[i][j-1][k-1]+y[j]*z[k]);
                ans=max(ans,dp[i][j][k]);
            }
        }
    }
}

int main(void)
{
        fastio;

        ll i;
        cin >> r >> g >> b;
        for(i=1;i<=r;i++)cin >> x[i];
        for(i=1;i<=g;i++)cin >> y[i];
        for(i=1;i<=b;i++)cin >> z[i];

        sort(x+1,x+r+1,greater<ll>());
        sort(y+1,y+g+1,greater<ll>());
        sort(z+1,z+b+1,greater<ll>());

        solve();
        cout << ans;

        return 0;

}
