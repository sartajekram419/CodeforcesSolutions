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
                int n,k;
                cin  >> n >> k;
                if(n<=k)cout << k-n << "\n";
                else if(k==0)
                {
                    if(n%2)cout << "1\n";
                    else cout << "0\n";
                }
                else
                {
                    if(n%2&&k%2)cout << "0\n";
                    else if(n%2)cout << "1\n";
                    else if(k%2==0)cout << "0\n";
                    else cout << "1\n";
                }

        }

        return 0;

}
