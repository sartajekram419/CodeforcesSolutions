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
                ll n,a[200005],i,c=1;
                cin >> n;
                for(i=0;i<n;i++)cin >> a[i];

                for(i=1;i<n;i++)
                {
                    if(a[i]==a[i-1])c++;
                    else {c=1;break;}
                }
                cout << c << "\n";
        }

        return 0;

}
