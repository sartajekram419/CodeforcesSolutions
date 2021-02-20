#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll ans,x1,x2,y1,y2,r,c,m,x,y;
    while(t--)
    {
        ans=0;
        cin >> x1 >> y1 >> x2 >> y2;
        r=x2-x1;
        c=y2-y1;
        m=min(r,c);
        ans=m*(m+1)/2+1;
        //cout << ans << " ";
        if(r>m)
        {
            x=r-m;
            y=r;
        }
        else
        {
            x=c-m;
            y=c;
        }
        if(m)ans=ans+m*x+y-(x+1);
        cout << r*c+1 << "\n";
    }

    return 0;
}
