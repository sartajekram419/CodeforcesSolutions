#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define mod 1000000007

ll n,a[300005],i;

int main(void)
{
        fastio;

        int t;
        cin >> t;



        while(t--)
        {
                ll m=0,ans;
                bool ind=0;
                cin >> n;
                for(i=0;i<n;i++)
                {
                    cin >> a[i];
                    if(a[i]>m)
                    {
                        ans=i;
                        m=a[i];
                    }
                }
                for(i=0;i<n;i++)
                {
                    if(a[i]!=m)
                    {
                        if(ans<i)
                        {
                            ans=i-1;
                        }
                        ind=1;
                        break;
                    }
                }

                if(ind)cout << ans+1 << "\n";
                else cout << "-1\n";
        }

        return 0;
}
