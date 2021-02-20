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
    ll n,i,a[200005];

    while(t--)
    {
        cin >> n;
        for(i=0;i<n;i++)cin >> a[i];

        for(i=n-2;i>=0;i--)
        {
            if(a[i]<a[i+1]){i--;break;}
        }
        for(;i>=0;i--)
        {
            if(a[i]>a[i+1])
            {
                i++;
                break;
            }
        }
        if(i>=0)cout << i << "\n";
        else cout << "0\n";
    }

    return 0;
}
