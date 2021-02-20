#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main()
{
    fastio;

    int t;
    cin >> t;
    ll n,x,a[100005],m,s,i,j;
    while(t--)
    {
        cin >> n >> x;
        s=0;
        m=n;

        for(i=0;i<n;i++)
        {
            cin >> a[i];
            s=s+a[i];
        }
        for(i=0,j=n-1;(s%x==0)&&i<=j;i++,j--)
        {
            if((s-a[i])%x){m--;s=s-a[i];break;}
            else if((s-a[j])%x){m--;s=s-a[j];break;}
            m=m-1;
            s=s-a[i];
        }

        if(s%x)cout << m << "\n";
        else cout << "-1\n";
    }

    return 0;
}
