#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main()
{
    fastio;

    ll n,k,i;
    vector<ll>v;
    cin >> n >> k;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i!=n/i)v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());

    if(v.size()<k)cout << "-1";
    else cout << v[k-1];

    return 0;
}
