#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)



int main(void)
{
    fastio ;

    int t ;
    cin >> t ;
    ll n, x ,y ,a ;

    while (t--)
    {
        cin >> n >> x >> y ;
        if(x>y)swap(x,y);

        if(n+1>x+y)cout << "1 ";
        else
        {
            cout << min(x+y-n+1,n) << " ";
        }

        if(x+y>=n+1)cout << n << "\n";
        else
        {
            cout << x+y-1 << "\n";
        }
    }

    return 0 ;
}
