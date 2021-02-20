#include <bits/stdc++.h>
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
    ll n,a[105],i;

    while(t--)
    {
        cin >> n;

        for(i=0;i<n;i++)
        {
            cin >> a[i];
            if(i%2==0)a[i]=max(a[i],-a[i]);
            else a[i]=min(a[i],-a[i]);
        }

        for(i=0;i<n;i++)cout << a[i] << ' ';
        cout << "\n";
    }

    return 0;
}
