#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll x,y,n,c,ans;
    while(t--)
    {
        cin >> x >> y >> n;
        c=n/x;
        ans=c*x+y;
        if(ans<=n)cout << ans << "\n";
        else cout << ans-x << "\n";
    }

    return 0;
}
