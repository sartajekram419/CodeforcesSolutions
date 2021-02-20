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

        int t;
        cin >> t;

        while(t--)
        {
                ll n,i,a;
                vector<pair<ll,ll>>v;
                vector<ll>x;
                cin >> n;
                for(i=1;i<=n;i++)
                {
                    cin >> a;
                    v.push_back({a,i});
                }
                sort(v.begin(),v.end());
                if(v[0].first+v[1].first>v[n-1].first)cout << "-1\n";
                else
                {
                    x.push_back(v[0].second);
                    x.push_back(v[1].second);
                    x.push_back(v[n-1].second);
                    sort(x.begin(),x.end());
                    for(i=0;i<3;i++)cout << x[i] << " ";
                    cout << "\n";
                }
        }

        return 0;

}
