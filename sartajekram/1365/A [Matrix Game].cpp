#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main()
{
    fastio;

    int t;
    cin >> t;
    int n,m,i,j;
    int s[55][55];
    map<int,int>r,c;
    while(t--)
    {
        cin >> n >> m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)cin >> s[i][j];
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j]==1)
                {
                    r[i]=1;
                    c[j]=1;
                }
            }
        }

        int ans=min(n-r.size(),m-c.size());

        if(ans%2==0)cout << "Vivek\n";
        else cout << "Ashish\n";

        r.clear();
        c.clear();
    }

    return 0;
}
