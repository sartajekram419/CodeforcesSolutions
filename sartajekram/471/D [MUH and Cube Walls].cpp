#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

ll a[200005],b[200005],n,w,i,j,p[200005];

void f()
{
    p[0]=j=0;
    for(i=1;i<w-1;)
    {
        if(b[i]==b[j])
        {
            p[i]=j+1;
            i++;
            j++;
        }
        else
        {
            if(j!=0)j=p[j-1];
            else
            {
                p[i]=j;
                i++;
            }
        }
    }
}

ll kmp()
{
    ll ans=0;
    f();
    j=0;
    i=0;
    for(i=0;i<n-1;)
    {
        if(a[i]==b[j])
        {
            j++;
            i++;
        }
        else
        {
            if(j!=0)
            {
                j=p[j-1];
            }
            else
            {
                i++;
            }
        }
        if(j==w-1)
        {
            ans++;
            j=p[j-1];
        }
    }

    return ans;
}

int main(void)
{
    fastio;

    cin >> n >> w;
    for(i=0;i<n;i++)cin >> a[i];
    for(i=0;i<w;i++)cin >> b[i];
    for(i=0;i<n-1;i++)a[i]=a[i+1]-a[i];
    for(i=0;i<w-1;i++)b[i]=b[i+1]-b[i];

    if(w==1)cout << n ;
    else cout << kmp();

    return 0;
}
