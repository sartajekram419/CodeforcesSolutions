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
    int n,i,l,r;
    string s;
    while(t--)
    {
        cin >> n >> s;
        l=n;
        r=-1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1'&&l==n)l=i;
            else if(s[i]=='0')
            {
                r=i;
            }
        }
        if(l<r)
        {
            for(i=0;i<l;i++)cout << s[i];
            for(i=r;i<n;i++)cout << s[i];
        }
        else
        {
            for(i=0;i<n;i++)cout << s[i];
        }

        cout << "\n";
    }

    return 0;

}
