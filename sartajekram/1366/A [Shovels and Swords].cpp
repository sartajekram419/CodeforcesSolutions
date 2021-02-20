#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main()
{
    fastio;

    int t;
    cin >> t;
    ll a,b,arr[5];
    while(t--)
    {
        cin >> a >> b;
        cout << min(min(a,b),(a+b)/3) << "\n";
    }

    return 0;
}
