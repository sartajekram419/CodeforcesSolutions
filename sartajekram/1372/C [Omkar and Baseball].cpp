#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 998244353

int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll n,i,a[200005],c,r,l;
    while(t--)
    {
        c=0;
        l=0;
        r=0;
        cin >> n;
        for(i=1;i<=n;i++)
        {
            cin >> a[i];
            if(a[i]==i)c++;
        }

        if(c==n)cout << "0\n";
        else if(c==0)cout << "1\n";
        else
        {
            for(i=1;i<=n;i++)
            {
                if(a[i]==i)l++;
                else break;
            }
            for(i=n;i>0;i--)
            {
                if(a[i]==i)r++;
                else break;
            }

            if(c-l-r)cout << "2\n";
            else cout << "1\n";
        }

    }

    return 0;
}
