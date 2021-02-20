#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18

vector<ll>v;

int main()
{
    fastio;

    ll n,i,l,ans;
    cin >> n;
    ll a[n+5],g[n+5];
    for(i=1;i<=n;i++)cin >> a[i];
    g[n]=a[n];
    for(i=n-1;i>0;i--)g[i]=__gcd(a[i],g[i+1]);
    for(i=1;i<n;i++)
    {
        v.push_back(a[i]*g[i+1]/g[i]);
    }
    ans=v[0];
    l=v.size();
    for(i=1;i<l;i++)ans=__gcd(ans,v[i]);
    cout << ans ;

    return 0;
}
