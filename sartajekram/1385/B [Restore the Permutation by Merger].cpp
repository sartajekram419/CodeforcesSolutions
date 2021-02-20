#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 998244353


int p[55];
vector<int>v;


int main(void)
{
    fastio;

    int t;
    cin >> t;
    int n,a,i;
    while(t--)
    {
        cin >> n;
        for(i=0;i<=n;i++)p[i]=-1;
        for(i=0;i<2*n;i++)
        {
            cin >> a;
            if(p[a]==-1)
            {
                v.push_back(a);
                p[a]=i;
            }
        }
        for(i=0;i<n;i++)cout << v[i] << " ";
        cout << "\n";
        v.clear();
    }

    return 0;
}
