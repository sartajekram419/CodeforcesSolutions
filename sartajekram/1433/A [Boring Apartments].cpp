#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define PI acos(-1.0)
#define mod 998244353



int main(void)
{
        fastio;

        int t;
        cin >> t;
        ll ans,d;
        string x;
        while(t--)
        {
            ans=0;
            cin >> x;

            d=x[0]-'0';

            ans=(d-1)*10+x.size()*(x.size()+1)/2;

            cout << ans << "\n";
        }

        return 0;
}
