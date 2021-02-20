#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int main()
{
    fastio;

    int n,i,a[205],ans[205],j;
    bool ind=0;
    string s;
    cin >> n >> s;
    a[0]=0;
    ans[0]=0;
    for(i=1;i<n;i++)
    {
        if(s[i]>=s[i-1])
        {
            a[i]=0;
            ans[i]=0;
        }
        else
        {
            j=i;
            ans[i]=1;
            a[i]=1;
            while(a[j-1]==0&&s[j]<=s[j-1]&&j)
            {
                swap(s[j],s[j-1]);
                swap(a[j],a[j-1]);
                j--;
            }
            if(j)
            {
                if(s[j]<s[j-1]){ind=1;break;}
            }
        }
    }
    if(ind)cout << "NO\n";
    else
    {
        cout << "YES\n";
        for(i=0;i<n;i++)cout << ans[i];
    }

    return 0;
}
