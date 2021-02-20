#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main()
{
    fastio;

    int t,i;
    cin >> t;
    int n,l,k,j;
    string s;
    while(t--)
    {
        int ans=0;
        cin >> n >> k;
        cin >> s;
        l=(-1)*k;
        j=k+1;
        for(i=0;i<n;i++,j++)
        {
            if(s[i]=='1')
            {
                l=i+1;
                j=0;
            }
            else
            {
                if(j==2*k+1)
                {
                    l=l+k+1;
                    j=k;
                    ans++;
                    //cout << i << " ";
                }
            }
        }
        if(n-l>k)ans++;

        cout << ans << "\n";
    }

    return 0;
}
