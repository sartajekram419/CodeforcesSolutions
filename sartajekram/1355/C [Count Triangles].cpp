#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

ll p[1500006];

int main()
{
    fastio;

    ll a,b,c,d,ans=0,i;
    cin >> a >> b >> c >> d;

    for(i=a;i<=b;i++)
    {
        p[i+b]++;
        p[i+c+1]--;
    }
    for(i=1;i<=1500006;i++)p[i]=p[i]+p[i-1];
    for(i=1500005;i>=0;i--)p[i]=p[i]+p[i+1];

    for(i=c;i<=d;i++)
    {
        ans=ans+p[i+1];
    }
    cout << ans ;

    return 0;
}
