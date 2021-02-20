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
    ll n,m,ans;
    while(t--)
    {
        cin >> n >> m;
        if(m%2)
        {
            if(n%2)
            {
                ans=(m/2)*n+n/2+1;
            }
            else
            {
                ans=(n/2)*m;
            }
        }
        else
        {
            ans=(m/2)*n;
        }
        cout << ans << "\n";
    }

    return 0;
}
