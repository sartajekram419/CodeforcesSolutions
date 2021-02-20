#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main(void)
{
    fastio;

    int t;
    cin >> t;
    int n,m,a[35][35],z,o,i,j,ans,k,l;
    while(t--)
    {
        ans=0;
        z=o=0;
        cin >> n >> m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)cin >> a[i][j];
        }

        for(k=0,l=(n+m-2);k<l;k++,l--)
        {
            o=z=0;
            if(k<m)
            {
                i=0;
                j=k;
            }
            else
            {
                i=k-m+1;
                j=m-1;
            }
            for(;i<n&&j>=0;i++,j--)
            {
                if(a[i][j]==1)o++;
                else z++;
            }
            if(k<m)
            {
                i=n-1;
                j=m-k-1;
            }
            else
            {
                i=n-1-(k-m+1);
                j=0;
            }
            for(;j<m&&i>=0;i--,j++)
            {
                if(a[i][j]==1)o++;
                else z++;
            }
            ans=ans+min(z,o);
        }
        cout << ans << "\n";
    }

    return 0;
}
