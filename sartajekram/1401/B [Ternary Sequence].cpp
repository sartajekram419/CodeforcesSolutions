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

        int T;
        cin >> T;


        while(T--)
        {
                ll a,b,c,x,y,z,ans=0,t;
                cin >> a >> b >> c;
                cin >> x >> y >> z;

                t=min(a,z);
                a=a-t;
                z=z-t;

                t=min(z,c);
                c=c-t;
                z=z-t;

                if(z)
                {
                    cout << -2*z << "\n";
                    continue;
                }

                t=min(y,c);
                ans=ans+2*t;
                c=c-t;
                y=y-t;

                cout << ans << "\n";
        }

        return 0;

}
