#include<bits/stdc++.h>
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
    ll n,k,ans,i,l,a[200005],w[200005];

    while(t--)
    {
        cin >> n >> k;
        for(i=0;i<n;i++)cin >> a[i];
        for(i=0;i<k;i++)cin >> w[i];
        sort(a,a+n,greater<ll>());
        sort(w,w+k);
        l=k-1;
        ans=0;
        for(i=0;i<k;i++)
        {
            ans=ans+a[i];
            if(w[i]==1)
            {
                ans=ans+a[i];
            }
            else
            {
                l=l+w[i]-1;
                ans=ans+a[l];
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
