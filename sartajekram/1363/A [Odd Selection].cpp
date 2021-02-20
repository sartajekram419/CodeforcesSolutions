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
    int a,n,x,odd,e,i;

    while(t--)
    {
        odd=0;
        e=0;
        cin >> n >> x;
        for(i=0;i<n;i++)
        {
            cin >> a;
            if(a%2)odd++;
            else e++;
        }
        if(x%2)
        {

            if(odd==0)cout << "NO\n";
            else
            {
                if(odd%2)cout << "YES\n";
                else if(x<n)cout << "YES\n";
                else cout << "NO\n";
            }
        }
        else
        {
            if(odd%2&&e)cout << "YES\n";
            else if(odd)
            {
                if(x<n&&e)cout << "YES\n";
                else cout << "NO\n";
            }
            else cout << "NO\n";
        }
    }

    return 0;
}
