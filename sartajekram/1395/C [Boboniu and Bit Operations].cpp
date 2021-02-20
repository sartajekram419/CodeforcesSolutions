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


        int n,m,a[205],b[205],i,j,k,c;
        cin >> n >> m;
        for(i=0;i<n;i++)cin >> a[i];
        for(i=0;i<m;i++)cin >> b[i];
        for(i=0;i<1024;i++)
        {
                c=0;
                for(j=0;j<n;j++)
                {
                    for(k=0;k<m;k++)
                    {
                            if(((a[j]&b[k])|i)==i){c++;break;}
                    }
                }
                if(c==n)break;
        }
        cout << i ;

        return 0;

}
