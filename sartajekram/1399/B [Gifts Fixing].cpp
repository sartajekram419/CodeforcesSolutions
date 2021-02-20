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
    ll n,a[55],b[55],am,bm,x,y,i;

    while (t--)
    {
        cin >> n;
        am=bm=inf;
        x=0;y=0;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            am=min(a[i],am);
        }
        for(i=0;i<n;i++)
        {
            cin >> b[i];
            bm=min(b[i],bm);
        }
        for(i=0;i<n;i++)
        {
            x=x+max(b[i]-bm,a[i]-am);
        }
        cout << x << "\n";
    }

    return 0 ;
}
