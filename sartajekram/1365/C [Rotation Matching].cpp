#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main(void)
{
    fastio;

    int n;
    cin >> n;
    int a[n+5],b[n+5],ap[n+5],bp[n+5],i;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
        ap[a[i]]=i;
    }
    int ans=0;
    map<int,int>m;
    map<int,int>:: iterator it;

    for(i=0;i<n;i++)
    {
        cin >> b[i];
        bp[b[i]]=i;
    }

    for(i=1;i<=n;i++)
    {
        int x=bp[i]-ap[i];
        if(x<0)x=x+n;
        if(m.find(x)==m.end())m[x]=1;
        else m[x]++;
    }

    for(it=m.begin();it!=m.end();it++)ans=max(ans,it->second);

    cout << ans;

    return 0;
}
