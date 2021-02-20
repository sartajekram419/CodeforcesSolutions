#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

string s="codeforces";

int main()
{
    fastio;

    ll n,i,j;
    cin >> n;
    cout << 3*n+4 << "\n";
    cout << "0 0\n";
    cout << "1 0\n";
    for(i=1;i<=n;i++)
    {
        for(j=0;j<3;j++)cout << i+j-1 << ' ' << i << "\n";
    }
    cout << n << ' ' << n+1 << "\n";
    cout << n+1 << ' ' << n+1 << "\n";

    return 0;
}
