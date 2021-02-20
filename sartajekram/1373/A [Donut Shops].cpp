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
    ll a,b,c,x,y;
    while(t--)
    {
        cin >> a >> b >> c;
        if(a>=c)x=-1;
        else x=1;

        if(c>=a*b)y=-1;
        else y=b;

        cout << x << " " << y << "\n";
    }

    return 0;

}
