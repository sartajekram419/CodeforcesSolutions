#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

ll fre[25];

int main()
{
    fastio;

    int n,i;
    cin >> n;
    ll a,k,ans=0;
    for(i=0;i<n;i++)
    {
        cin >> a;
        for(k=0;k<22;k++)
        {
            if(a&(1<<k))fre[k]++;
        }
    }
    for(i=0;i<n;i++)
    {
        a=0;
        for(k=0;k<22;k++)
        {
            if(fre[k])
            {
                fre[k]--;
                a=a+(1<<k);
            }
        }
        ans=ans+a*a;
    }
    cout << ans ;

    return 0;
}
