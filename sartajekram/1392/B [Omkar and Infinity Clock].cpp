#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

ll a[200005],b[200005],c[200005];

int main(void)
{
        fastio;

        int t;
        cin >> t;

        while(t--)
        {
                ll n,k,mx=-inf,mn=inf,i;

                cin >> n >> k;
                for(i=0;i<n;i++)
                {
                    cin >> a[i];
                    mx=max(mx,a[i]);
                    mn=min(mn,a[i]);
                }
                for(i=0;i<n;i++)
                {
                    b[i]=mx-a[i];
                }
                for(i=0;i<n;i++)
                {
                    c[i]=mx-mn-b[i];
                }
                for(i=0;i<n;i++)
                {
                    if(k%2)cout << b[i] << " ";
                    else cout << c[i] <<  " ";
                }
                cout << "\n";
        }

        return 0;

}
