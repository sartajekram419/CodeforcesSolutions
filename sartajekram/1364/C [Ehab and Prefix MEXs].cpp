#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

vector<ll>v;
queue<ll>q;
int fre[100005];
int vis[1000005];

int main(void)
{
    fastio;

    bool ind=0,x=0;
    ll i,n,j,a,b,k,p;
    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> p;
        if(p>i+1)ind=1;
        fre[p]++;
        vis[p]=-1;
    }

    k=0;
    for(i=0;i<=p;i++)
    {
        if(fre[i])
        {
            if(x)
            {
                b=q.front();
                q.pop();
                v.push_back(b);
                vis[b]=1;
                j=1;
            }
            else j=0;

            q.push(i);
            for(;j<fre[i];j++)
            {
                if(vis[k]==0)
                {
                    v.push_back(k);
                    vis[k]=1;
                }
                else
                {
                    while(vis[k])
                    {
                        k++;
                    }
                    v.push_back(k);
                    vis[k]=1;
                }
            }
            x=1;
        }
    }

    if(ind)cout << "-1\n";
    else
    {
        for(i=0;i<n;i++)cout << v[i] << " ";
    }

    return 0;

}

/*
7
0 0 2 2 5 5 6
*/
