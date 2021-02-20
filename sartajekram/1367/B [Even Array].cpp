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
    int n,a[50];
    while(t--)
    {
        int e=0,o=0;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            if(i%2)
            {
                if(a[i]%2==0)e++;
            }
            else
            {
                if(a[i]%2)o++;
            }
        }
        if(o==e)cout << o << "\n";
        else cout << "-1\n";
    }

    return 0;
}
