#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main()
{
    fastio;

    int t;
    cin >> t;
    ll a,b,n;
    while(t--)
    {
        ll ans=0;
        cin >> a >> b >> n;
        if(a>b)swap(a,b);
        while(1)
        {
            a=a+b;
            ans++;
            if(a>n)break;
            b=b+a;
            ans++;
            if(b>n)break;
        }
        cout << ans << "\n";
    }

    return 0;
}
