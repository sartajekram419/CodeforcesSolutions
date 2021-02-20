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
    int n,a[500005],i;

    while(t--)
    {
        cin >> n;
        for(i=0;i<n;i++)cin >> a[i];
        if(a[n-1]>a[0])cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
