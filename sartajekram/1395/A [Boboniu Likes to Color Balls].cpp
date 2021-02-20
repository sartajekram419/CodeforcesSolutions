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

        while(t--)
        {
                ll r,g,b,w,c=0;
                cin >> r >> g >> b >> w;
                if(r%2==0)c++;
                if(g%2==0)c++;
                if(b%2==0)c++;
                if(w%2==0)c++;

                if(c>2)cout << "YES\n";
                else if(c==1)
                {
                    if(w%2==0)cout << "YES\n";
                    else
                    {
                        if(r&&g&&b)cout << "YES\n";
                        else cout << "NO\n";
                    }
                }
                else if(c==2)cout << "NO\n";
                else cout << "YES\n";

        }


        return 0;

}
//                else if(c==1)
//                {
//                    if(r&&g&&b)cout << "YES\n";
//                    else cout << "NO\n";
//                }
//                else
//                {
//                    cout << "NO\n";
//                }
