#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main(void)
{
    fastio;

    int n,ans=0,i;
    cin >> n;
    ll a[n+5];
    int l[n+5],r[n+5];

    for(i=0;i<n;i++)
    {
        cin >> a[i];
        l[i]=r[i]=1;
    }

    l[0]=1;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])l[i]=l[i-1]+1;
        ans=max(ans,l[i]);
    }
    r[n-1]=1;
    for(i=n-2;i>=0;i--)
    {
        if(a[i]<a[i+1])r[i]=r[i+1]+1;
        ans=max(ans,r[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if(a[i-1]<a[i+1])
        {
            ans=max(ans,l[i-1]+r[i+1]);
        }
    }
    cout << ans ;

    return 0;
}
