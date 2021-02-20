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
    ll l,r,m,x,y,u,v,a,b,c,i;
    while(t--)
    {
        cin >> l >> r >> m;

        for(i=l;i<=r;i++)
        {
            x=m%i;
            y=i-x;

            if(r-l>=x&&m/i)
            {
                a=i;
                b=l+x;
                c=l;
                break;
            }
            else if(r-l>=y)
            {
                a=i;
                b=l;
                c=l+y;
                break;
            }
        }

        cout << a << " " << b << " " << c << "\n";
    }

    return 0;
}
