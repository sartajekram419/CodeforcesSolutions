#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)


int main(void)
{

        fastio;

        int t;
        cin >> t;
        string s[105];
        while(t--)
        {
                int n,i,m,ans=0;
                cin >> n >> m;
                for(i=0;i<n;i++)cin >> s[i];
                for(i=0;i<m-1;i++)
                {
                    if(s[n-1][i]=='D')ans++;
                }
                for(i=0;i<n-1;i++)
                {
                    if(s[i][m-1]=='R')ans++;
                }
                cout << ans << "\n";
        }


        return 0;

}
