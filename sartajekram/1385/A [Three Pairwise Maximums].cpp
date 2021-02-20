#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 998244353





int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll a[3];
    while(t--)
    {
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        if(a[2]==a[1])
        {
            cout << "YES\n";
            cout << a[2] << " " << a[0] << " " << a[0] << "\n";
        }
        else cout << "NO\n";
    }

    return 0;
}
