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
                ll n,s,d=1,x,sum=0,r,ans=0;
                cin >> n >> s;

                r=n;
                while(r)
                {
                        sum=sum+r%10;
                        r=r/10;
                }
                if(sum<=s){cout << "0\n";continue;}

                while(sum>=s&&n)
                {
                        x=n%10;
                        ans=ans+x*d;
                        sum=sum-x;
                        n=n/10;
                        d=d*10;
                }

                cout << d-ans << "\n";
        }

        return 0;

}
