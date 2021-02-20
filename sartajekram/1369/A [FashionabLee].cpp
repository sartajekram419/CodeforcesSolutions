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
    ll n;
    while(t--)
    {
        cin >> n;
        if(n%4)cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}
