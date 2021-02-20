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
        ll a[200005];

        while(t--)
        {
                ll n,i,c=0,r=0,d;
                cin >> n;
                for(i=0;i<n;i++)
                {
                    cin >> a[i];
                }
                for(i=1;i<n;i++)
                {
                        d=a[i]-a[i-1];
                        if(d>=0)r=0;
                        else
                        {
                            if(abs(d)<=r){a[i]=a[i]+abs(d);r=abs(d);}
                            else
                            {
                                c=c+abs(d)-r;
                                r=abs(d);
                                a[i]=a[i]+abs(d);
                            }
                        }
                        //cout << c << " " << r << " ";
                }
                cout << c << "\n";

        }

        return 0;

}
