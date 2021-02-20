#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

vector<ll>ans;

int main(void)
{
    fastio;

    ll u,v,x,a[65],i,c;
    cin >> u >> v;
    x=v-u;

    if(u==0&&v==0)cout << "0";
    else if(v<u)cout << "-1";
    else if(x%2)cout << "-1";
    else
    {
        x=x/2;
        for(i=0;i<64;i++)
        {
            if(x&((ll)1<<i))a[i]=2;
            else a[i]=0;
        }

        for(i=0;i<64;i++)
        {
            if((u&((ll)1<<i))==0&&a[i]>0)
            {
                a[i]--;
                u=u+((ll)1<<i);
            }
        }
        ans.push_back(u);

        while(1)
        {
            c=0;
            x=0;
            for(i=0;i<64;i++)
            {
                if(a[i]>0)
                {
                    x=x+((ll)1<<i);
                    a[i]--;
                }
                else c++;
            }
            if(c==64)break;

            ans.push_back(x);
        }

        x=ans.size();
        cout << x << "\n";
        for(i=0;i<x;i++)cout << ans[i] << " ";
    }

    return 0;
}
