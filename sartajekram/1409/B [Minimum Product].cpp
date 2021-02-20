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
                ll a,b,x,y,n,c,d,m;
                cin >> a >> b >> x >> y >> n;
                c=a;d=b;m=n;

                if(a-x>=n){a=a-n;n=0;}
                else {n=n-a+x;a=x;}

                if(b-y>=n){b=b-n;n=0;}
                else {n-n-b+y;b=y;}

                n=m;

                if(d-y>=n){d=d-n;n=0;}
                else {n=n-d+y;d=y;}

                if(c-x>=n){c=c-n;n=0;}
                else {n-n-c+x;c=x;}


                cout << min(a*b,c*d) << "\n";
        }

        return 0;

}
