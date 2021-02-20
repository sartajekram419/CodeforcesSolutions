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
    ll n,r,x,ans;
    while(t--)
    {
        cin >> n >> r;
        x=min(n-1,r);
        ans=x*(x+1)/2;
        if(r>=n)ans++;
        cout << ans << "\n";
    }

    return 0;
}
