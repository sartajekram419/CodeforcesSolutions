#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

int main(void)
{
    fastio;

    int t;
    cin >> t;
    int n,m,a[20000],b,ans,i;
    while(t--)
    {
        bool ind=0;
        cin >> n >> m;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for(i=0;i<m;i++)
        {
            cin >> b;
            if(binary_search(a,a+n,b)){ind=1;ans=b;}
        }
        if(ind)
        {
            cout << "YES\n";
            cout << "1 " << ans << "\n";
        }
        else cout << "NO\n";

    }

    return 0;
}
