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
    ll a,b;
    while(t--)
    {
        cin >> a >> b;
        if(a<b)swap(a,b);
        if(a==b)cout << "0\n";
        else if(a%b)cout << "-1\n";
        else
        {
            ll x=a/b,ans=0;
            while(1)
            {
                if(x%8==0)x=x/8;
                else if(x%4==0)x=x/4;
                else if(x%2==0)x=x/2;
                else break;
                ans++;
            }
            if(x==1)cout << ans << "\n";
            else cout << "-1\n";
        }
    }

    return 0;
}
