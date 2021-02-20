#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

vector<int>v;

int main(void)
{
    fastio;

    int t;
    cin >> t;
    int n,a[100005],i;
    while(t--)
    {
        bool ind;
        cin >> n;
        for(i=0;i<n;i++)cin >> a[i];
        v.push_back(a[0]);
        if(a[1]>a[0])ind=0;
        else ind=1;
        for(i=1;i<n;i++)
        {
            if(ind)
            {
                if(a[i]>a[i-1]){ind=0;v.push_back(a[i-1]);}
            }
            else
            {
                if(a[i]>a[i-1]);
                else
                {
                    ind=1;
                    v.push_back(a[i-1]);
                }
            }
        }
        v.push_back(a[n-1]);
        int l=v.size();
        cout << l << "\n";
        for(i=0;i<l;i++)cout << v[i] << " ";
        cout << "\n";
        v.clear();
    }

    return 0;

}

