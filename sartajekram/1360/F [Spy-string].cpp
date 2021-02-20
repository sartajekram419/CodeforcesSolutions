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
    int n,m,i,j,k,c;
    string s[15],x;
    while(t--)
    {
        bool ind=0;
        cin >> n >> m;
        for(i=0;i<n;i++)cin >> s[i];

        for(j=0;j<m;j++)
        {
            x=s[0];
            for(x[j]='a';x[j]<='z';x[j]++)
            {
                for(i=0;i<n;i++)
                {
                    c=0;
                    for(k=0;k<m;k++)
                    {
                        if(s[i][k]!=x[k])c++;
                        if(c>1)break;
                    }
                    if(c>1)break;
                }
                if(c<=1)
                {
                    ind=1;
                    break;
                }
            }
            if(ind)break;
        }
        if(ind)cout << x << "\n";
        else cout << "-1\n";

    }

    return 0;
}
