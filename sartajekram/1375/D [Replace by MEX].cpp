#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

vector<int>v;
int vis[3005];

int main(void)
{
    fastio;

    int t;
    cin >> t;
    int n,a[1005],i,x,j;
    while(t--)
    {
        bool ind;
        cin >> n;
        for(i=0;i<n;i++)cin >> a[i];
        for(i=0;i<2000;i++)vis[i]=0;

        ind=0;
        for(i=0;i<n;i++)
        {
            vis[a[i]]++;
            if(i)
            {
                if(a[i]<a[i-1])ind=1;
            }
        }

        while(ind)
        {
            ind=0;
            for(i=1;i<n;i++)
            {
                if(a[i]<a[i-1]){ind=1;break;}
            }

            if(ind==0)break;

            for(i=0;i<2000;i++)
            {
                if(vis[i]==0){x=i;break;}
            }
            if(x<n)
            {
                vis[a[x]]--;
                v.push_back(x);
                a[x]=x;
                vis[x]++;
            }
            else
            {
                for(i=0;i<n;i++)
                {
                    if(a[i]!=i)
                    {
                        vis[a[i]]--;
                        v.push_back(i);
                        a[i]=x;
                        vis[x]++;
                        break;
                    }
                }
            }
        }

        //cout << "\n";
        //for(i=0;i<n;i++)cout << a[i] << " ";
        //cout << "\n";

        n=v.size();
        cout << n << "\n";
        for(i=0;i<n;i++)cout << v[i]+1 << " ";
        cout << "\n";
        v.clear();
    }

    return 0;
}
