#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

ll a[100001];
ll dp[100001][2];

ll solve()
{
    int i;
    dp[1][0]=0;
    dp[1][1]=a[1];
    for(i=2;i<=100000;i++)
    {
        dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
        dp[i][1]=max(dp[i-2][0],dp[i-2][1])+a[i];
    }
    return max(dp[100000][0],dp[100000][1]);
}

int main()
{
    fastio;

    int n,i;
    cin >> n;
    ll x;
    for(i=0;i<n;i++)
    {
        cin >> x;
        a[x]=a[x]+x;
    }
    cout << solve();

    return 0;
}