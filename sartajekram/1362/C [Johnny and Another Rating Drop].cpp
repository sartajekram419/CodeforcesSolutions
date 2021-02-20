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
    ll n,ans,i,y,x;
    while(t--)
    {
        cin >> n;
        y=n;
        ans=0;
        x=n;
        while(x>0)
        {
            x=x/4;
            ans=ans+x*4;

            if(y%4==1)ans=ans+1;
            else if(y%4==2)ans=ans+3;
            else if(y%4==3)ans=ans+4;

            ans=ans+x*3;

            x=x/2;
            y=x;
        }


        cout << ans << "\n";
    }

    return 0;
}
