#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int c[105];

int main(void)
{
    fastio;

    int n,m,ans,total=0,i,x,j,a;
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        ans=0;
        cin >> a;
        total=total+a;
        x=total;

        for(j=100;j>0&&x>m;j--)
        {
            if(c[j]*j>=x-m)
            {
                ans=ans+ceil((double)(x-m)/(double)j);
                x=m-1;
            }
            else
            {
                ans=ans+c[j];
                x=x-c[j]*j;
            }
            if(x<=m)break;
        }
        c[a]++;
        cout << ans << " ";
    }
    return 0;

}
