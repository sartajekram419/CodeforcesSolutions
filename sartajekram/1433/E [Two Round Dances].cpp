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

        ll n,a=1,b=1,i,c=1;

        cin >> n;

        for(i=1;i<=n;i++)a=a*i;
        for(i=1;i<=n/2;i++)b=b*i;
        for(i=1;i<n/2;i++)c=c*i;

        cout << a/b/b/2*c*c;


        return 0;
}
