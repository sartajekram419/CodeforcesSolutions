#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

map<ll,ll>m;

int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll n,k,a[200005],i,x,y,ans;

    while(t--)
    {
        x=0;
        ans=0;
        cin >> n >> k;
        for(i=0;i<n;i++)cin>> a[i];
        //sort(a,a+n,);
        for(i=0;i<n;i++)
        {
            if(a[i]%k)
            {
                y=k-a[i]%k;
                if(y<x)
                {
                    if(m.find(y)==m.end())
                    {
                        m[y]=1;
                    }
                    else
                    {
                        m[y]++;
                        if((m[y]-1)*k+y==x)
                        {
                            ans++;
                            x++;
                        }
                        else if((m[y]-1)*k+y>x)
                        {
                            ans=ans+(m[y]-1)*k+y-x+1;
                            x=(m[y]-1)*k+y+1;
                        }
                    }
                }
                else if(y==x)
                {
                    m[x]++;
                    x++;
                    ans++;
                }
                else if(y>x)
                {
                    ans=ans+y-x+1;
                    x=y+1;
                    if(m.find(y)==m.end())m[y]=1;
                    else m[y]++;
                }
            }
            //cout << ans  << ' ' ;//<< x << ' ';
        }
        //cout <<"\n";
        cout << ans << "\n";
        m.clear();
    }

    return 0;
}
