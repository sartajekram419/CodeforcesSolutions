#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll l,r;
    while(t--)
    {
        cin >> l >> r;
        if(2*l<=r)
        {
            cout << l << " " << 2*l << "\n";
        }
        else cout << "-1 -1\n";
    }

    return 0;
}


