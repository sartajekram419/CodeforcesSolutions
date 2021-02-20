#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main(void)
{
    fastio ;

    int t ;
    cin >> t ;
    ll n,a,i,c[105],s[105],m=0,j,index;

    while (t--)
    {
        for(i=0;i<105;i++){c[i]=0;s[i]=0;}

        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> a;
            c[a]++;
        }

        for(i=1;i<55;i++)
        {
            for(j=i;j<55;j++)
            {
                if(i!=j)s[i+j]+=min(c[i],c[j]);
                else s[i+j]+=c[i]/2;
            }
        }
        m=0;
        for(i=0;i<101;i++)m=max(m,s[i]);
        cout << m <<  " \n";
    }

    return 0 ;
}
