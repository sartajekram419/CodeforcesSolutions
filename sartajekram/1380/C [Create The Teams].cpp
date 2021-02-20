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
    ll n,x,a[100005],s,ans,i,l;
    while(t--)
    {
        cin >> n >> x;
        for(i=0;i<n;i++)cin >> a[i];
        sort(a,a+n);
        ans=0;
        l=-1;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]>=x)ans++;
            else
            {
                l=i+1;
                break;
            }
        }
        //cout << l << " ";
        for(i=l-1;i>=0;i--)
        {
            if(a[i]*(l-i)>=x)
            {
                ans++;
                l=i;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}


