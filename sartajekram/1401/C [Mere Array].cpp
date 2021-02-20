#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007


int main(void)
{

        fastio;

        int T;
        cin >> T;

        ll a[100005];

        while(T--)
        {
                vector<ll>v;
                ll n,i,m=inf;
                bool ind=1;
                cin >> n;
                for(i=0;i<n;i++)
                {
                    cin >> a[i];
                    m=min(a[i],m);
                    v.push_back(a[i]);
                }
                sort(v.begin(),v.end());
                for(i=0;i<n;i++)
                {
                    if(a[i]%m)
                    {
                        if(v[i]!=a[i]){ind=0;break;}
                    }
                }
                if(ind)cout << "YES\n";
                else cout << "NO\n";
        }

        return 0;

}
