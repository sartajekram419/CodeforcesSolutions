#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18

ll f(ll d[],ll l,ll r,ll x)
{
    ll i;
    for(i=l;i<=r;i++)
    {
        if(d[i]>x){return i-1;}
    }
}

int main()
{
    fastio;

    ll n,i,x,ans=0,m,l;
    cin >> n >> x;
    ll a[n+5],d[2*n+5],s[2*n+5];
    d[0]=s[0]=0;

    for(i=1;i<=n;i++)
    {
        cin >> a[i];

        d[i]=d[i-1]+a[i];
        s[i]=s[i-1]+a[i]*(a[i]+1)/2;
    }
    for(i=n+1;i<=2*n;i++)
    {
        d[i]=d[i-1]+a[i-n];
        s[i]=s[i-1]+a[i-n]*(a[i-n]+1)/2;
    }

    l=0;
    for(i=1;i<=2*n;i++)
    {
        m=0;
        if(d[i]>=x)
        {
            l=f(d,l,i,d[i]-x);
            m=s[i]-s[l]-(d[i]-d[l]-x)*(d[i]-d[l]-x+1)/2;
        }
        ans=max(ans,m);
    }
    cout << ans ;

    return 0;
}
