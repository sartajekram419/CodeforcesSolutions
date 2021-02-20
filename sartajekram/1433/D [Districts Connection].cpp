#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define PI acos(-1.0)
#define mod 998244353

vector<pair<ll,ll>>v;

int main(void)
{
        fastio;

        int t;
        cin >> t;

        ll n,a,i;

        while(t--)
        {
            cin >> n;
            for(i=0;i<n;i++)
            {
                cin >> a;
                v.push_back({a,i+1});
            }

            sort(v.begin(),v.end());

            if(v[0].first==v[n-1].first)cout << "NO\n";
            else
            {
                cout << "YES\n";

                for(i=1;i<n;i++)
                {
                    if(v[0].first!=v[i].first)cout << v[0].second << " " << v[i].second << "\n";
                }
                for(i=1;i<n;i++)
                {
                    if(v[i].first==v[0].first)cout << v[i].second << " " << v[n-1].second << "\n";
                    else break;
                }
            }
            v.clear();
        }

        return 0;
}
