#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int a[305][305];

int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll n,k,p,q,x,i,j;
    while(t--)
    {
        cin >> n >> k;
        p=ceil((double)k/(double)n);
        q=k/n;
        x=k%n;
        cout << 2*(p-q)*(p-q) << "\n";

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)a[i][j]=0;
        }

        for(j=0,k=0;j<n;j++,k++)
        {
            for(i=0;i<q;i++)
            {
                a[(i+k)%n][j]=1;
            }
        }
        j=0;
        k=0;
        while(x--)
        {
            a[(q+k)%n][j]=1;
            j++;
            k++;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)cout << a[i][j];
            cout << "\n";
        }
    }

    return 0;
}
