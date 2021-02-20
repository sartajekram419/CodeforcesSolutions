#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

vector<ll>v;

int main()
{
    fastio;

    ll n,m,i,j;
    cin >> n >> m;
    ll a[n+5],s[n+5],t=0,k,p[n+5];
    for(i=0;i<n;i++)cin >> a[i];
    sort(a,a+n);

    for(i=0;i<n;i++)
    {
        if(i)s[i]=s[i-1]+a[i];
        else s[i]=a[i];
    }

    for(i=0;i<m;i++)
    {
        t=0;
        for(j=i;j<n;j=j+m)
        {
            p[j]=t+a[j];
            t=p[j];
        }
    }

    t=0;
    for(i=n-1,j=1;i>=0;i--,j++)
    {
        t=t+a[i]*ceil((double)j/(double)m);
    }

    k=n-1;
    if(k+1>m)v.push_back(t);
    while(k>m)
    {
        t=t-p[k-m]-a[k];
        v.push_back(t);
        k--;
    }

    for(i=m-1;i>=0;i--){v.push_back(s[i]);}
    for(i=n-1;i>=0;i--)cout << v[i] << " ";
    return 0;
}
