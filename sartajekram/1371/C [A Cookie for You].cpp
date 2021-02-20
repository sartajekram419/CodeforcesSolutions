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
    ll a,b,n,m,mn,mx;
    while(t--)
    {
        cin >> a >> b >> n >> m;
        mn=min(a,b);
        mx=max(a,b);
        if(a+b<n+m)cout << "No\n";
        else
        {
            if(mn<m)cout << "No\n";
            else
            {
                cout << "Yes\n";
            }
        }
    }

    return 0;
}
