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
    int n,a[1005],i,j,x,y,z,mn;
    while(t--)
    {
        bool ind=0;
        cin >> n;
        for(i=0;i<n;i++)cin >> a[i];
        mn=10000;
        for(i=1;i<n-1;i++)
        {
            if(a[i-1]<mn)
            {
                x=i-1;
                mn=a[i-1];
            }
            if(a[i]<mn)
            {
                mn=a[i];
                x=i;
                continue;
            }
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[i])
                {
                    y=i;
                    z=j;
                    ind=1;
                    //cout << i << " " << j <<"     ";
                    break;
                }
            }
            if(ind)break;
        }
        if(ind)
        {
            cout << "YES\n";
            cout << x+1 << " " << y+1 << " " << z+1 << "\n";
        }
        else cout << "NO\n";
    }

    return 0;
}


