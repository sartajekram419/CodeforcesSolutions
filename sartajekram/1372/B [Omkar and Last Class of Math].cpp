#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

vector<ll>v;

int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll n,i,x,y,l;
    while(t--)
    {
        bool ind=0;
        cin >> n;
        l=inf;
        if(n%2==0)cout << n/2 << " " << n/2 << "\n";
        else
        {
            ll c=1;
            v.push_back(1);
            for(i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    v.push_back(i);
                    v.push_back(n/i);
                    c=c+2;
                }
            }

            for(i=0;i<c;i++)
            {

                ll lcm=(v[i]*(n-v[i]))/__gcd(v[i],n-v[i]);
                if(lcm<l)
                {
                    l=lcm;
                    x=v[i];
                    y=n-v[i];
                }
            }
            cout << x << " " <<  y << "\n";
        }
        v.clear();
    }

    return 0;
}


