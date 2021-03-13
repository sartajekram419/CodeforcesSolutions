#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18

ll int ncr(ll int a)
{
    if(a==1)return 0;
    return (a*(a-1))/2;
}
int main()
{
    fastio;
    ll int n,m,minimum,maximum;
    cin >> n >> m;

    minimum=ncr(ceil((double)n/(double)m))*(n%m)+ncr(floor((double)n/(double)m))*(m-n%m);

    maximum=ncr(n-m+1);

    cout << minimum << " " << maximum;
    return 0;
}