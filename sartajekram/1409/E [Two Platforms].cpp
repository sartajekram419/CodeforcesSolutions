#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

ll n,k,i,x[200005],a,m[200005],c[200005];

int main(void)
{
        fastio;

        int t;
        cin >> t;

        while(t--)
        {
                cin >> n >> k;
                for(i=0;i<n;i++)cin >> x[i];
                for(i=0;i<n;i++)cin >> a;
                sort(x,x+n);

                for(i=0;i<n;i++)
                {
                    c[i]=upper_bound(x,x+n,x[i]+k)-x-i;
                }

                m[n]=0;
                for(i=n-1;i>=0;i--)
                {
                    m[i]=max(c[i],m[i+1]);
                }

                a=0;
                for(i=0;i<n;i++)
                {
                    a=max(a,c[i]+m[i+c[i]]);
                }

                cout << a << "\n";
        }

        return 0;

}
