#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main()
{
    fastio;

    ll n;
    cin >> n;

    if(n==1)cout << 1;
    else if(n==2)cout << 2;
    else if(n%2)cout << n*(n-1)*(n-2);
    else cout << max(n*(n-1)*(n-3)/__gcd(n,n-3),(n-1)*(n-2)*(n-3));

    return 0;
}
