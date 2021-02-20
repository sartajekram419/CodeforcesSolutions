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
    string b;
    while(t--)
    {
        cin >> b;
        int l=b.size();
        cout << b[0];
        for(i=1;i<l-1;i=i+2)cout << b[i] ;
        cout << b[l-1] << "\n";
    }

    return 0;
}
