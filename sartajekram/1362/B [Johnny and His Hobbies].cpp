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
    int n,a[2000],b[2000],i,k;
    while(t--)
    {
        cin >> n;
        for(i=0;i<n;i++)cin >> a[i];
        sort(a,a+n);
        for(k=1;k<=1024;k++)
        {
            for(i=0;i<n;i++)
            {
                b[i]=k^a[i];
            }
            sort(b,b+n);
            for(i=0;i<n;i++)
            {
                if(a[i]!=b[i])break;
            }
            if(i==n)break;
        }
        if(k==1025)cout << "-1\n";
        else cout << k << "\n";
    }

    return 0;

}

