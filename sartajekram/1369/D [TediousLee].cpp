#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

ll dp[2000006];

int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll n,i;
    for(i=3;i<=2000006;i++)
    {
        dp[i]=(dp[i-1]+2*dp[i-2])%mod;
        if(i%3==0)dp[i]++;
        dp[i]=dp[i]%mod;
    }

    while(t--)
    {
        cin >> n;
        cout << (dp[n]*4)%mod << "\n";
    }

    return 0;

}
