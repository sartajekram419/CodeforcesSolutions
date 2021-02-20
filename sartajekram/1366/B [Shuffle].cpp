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
    ll n,x,m,s,e,l,r,i;
    bool ind;
    while(t--)
    {
        ind=1;
        s=0;
        e=0;
        cin >> n >> x >> m;
        for(i=0;i<m;i++)
        {
            cin >> l >> r;
            if(ind)
            {
                if(x>=l&&x<=r)
                {
                    s=l;
                    e=r;
                    ind=0;
                }
            }
            else
            {
                if(l<s&&r>e)
                {
                    s=l;
                    e=r;
                }
                else if(l>=s&&l<=e)
                {
                    e=max(r,e);
                }
                else if(r>=s&&r<=e)
                {
                    s=min(s,l);
                }
            }
        }
        cout << e-s+1 << "\n";
    }

    return 0;
}
