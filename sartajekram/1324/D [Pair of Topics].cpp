#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 10000000
//#define pi acos(-1.0)
#define mod 1000000007

ll z=0,a[200005],ans,pi=0,ni=0,b;
ll pos[200005],neg[200005];

int main(void)
{
    fastio;

    ll n,i;
    cin >> n;
    for(i=0;i<n;i++)cin >> a[i];
    for(i=0;i<n;i++)
    {
        cin >> b;
        if(a[i]-b>0)
        {
            pos[pi]=a[i]-b;
            pi++;
        }
        else if(a[i]==b)z++;
        else
        {
            neg[ni]=b-a[i];
            ni++;
        }
    }
    sort(pos,pos+pi);
    ans=pi*(pi-1)/2+z*pi;

    for(i=0;i<ni;i++)
    {
        b=upper_bound(pos,pos+pi,neg[i])-pos;
        ans=ans+pi-b;
    }
    cout << ans;

    return 0;
}






//freopen(".txt","r",stdin);
//freopen("output.txt","w",stdout);
