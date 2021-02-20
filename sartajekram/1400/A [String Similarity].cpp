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

                int n,i;
                string s;
                cin >> n >> s;
                for(i=0;i<2*n-1;i=i+2)cout << s[i];
                cout << "\n";

        }

        return 0;

}
