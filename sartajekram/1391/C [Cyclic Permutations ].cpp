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

        ll n,i,ans=1,x=1;
        cin >> n;

        for(i=1;i<=n;i++)ans=(ans*i)%mod;
        for(i=1;i<n;i++)x=(x*2)%mod;
        ans=(ans-x+mod)%mod;

        cout << ans;

        return 0;

}
