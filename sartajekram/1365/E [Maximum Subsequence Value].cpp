#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

ll n,i,j,k,ans=0,a[505],m;

int main(void)
{
    fastio;

    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        ans=max(ans,a[i]);
    }

    if(n==2)
    {
        m=a[0]|a[1];
        ans=max(ans,m);
    }

    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                m=(a[i]|a[j])|a[k];
                ans=max(ans,m);
            }
        }
    }

    cout << ans;

    return 0;
}

