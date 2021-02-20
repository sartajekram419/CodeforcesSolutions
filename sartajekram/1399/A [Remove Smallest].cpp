#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main(void)
{
    fastio ;

    int t ;
    cin >> t ;

    while (t--)
    {
        int n,a[105],i;
        bool ind=0;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>1)ind=1;
        }
        if(ind)cout << "NO\n";
        else cout << "YES\n";
    }

    return 0 ;
}
