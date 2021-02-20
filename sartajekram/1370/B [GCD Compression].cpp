#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

vector<int>o,e;

int main()
{
    fastio;

    int t;
    cin >> t;
    int n,a[2005],i,ol,el;
    while(t--)
    {
        cin >> n;
        for(i=0;i<2*n;i++)
        {
            cin >> a[i];
            if(a[i]%2)o.push_back(i+1);
            else e.push_back(i+1);
        }
        ol=o.size();
        el=e.size();

        if(ol%2)
        {
            ol--;
            el--;
        }
        else
        {
            if(ol)ol=ol-2;
            else el=el-2;
        }
        for(i=0;i<ol;i=i+2)
        {
            cout << o[i]<< " " << o[i+1] << "\n";
        }
        for(i=0;i<el;i=i+2)
        {
            cout << e[i] << " " << e[i+1] << "\n";
        }
        e.clear();
        o.clear();
    }

    return 0;
}
