#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main(void)
{
    fastio;

    int t;
    cin >> t;
    int a[505],b[505],n,i,j;
    while(t--)
    {
        int c=2;
        cin >> n;
        for(i=0;i<n;i++)cin >> a[i];
        for(i=0;i<n;i++)cin >> b[i];

        bool ind=0;
        int one=0,zero=0;
        for(i=0;i<n;i++)
        {
            if(b[i])one++;
            else zero++;
        }
        if(one&&zero)ind=1;
        if(ind)cout << "Yes\n";
        else
        {
            for(i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1]){ind=1;break;}
            }
            if(ind)cout << "No\n";
            else cout << "Yes\n";
        }

    }
    return 0;

}

