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
    ll l,i,c,ans,len;
    string s;
    while(t--)
    {
        cin >> s;
        l=s.size();
        c=0;

        ans=l;
        for(i=0;i<l;i++)
        {
            if(s[i]=='+')c++;
            else c--;

            if(c<0)
            {
                ans=ans+i+1;
                c=0;
            }
        }

        cout << ans << "\n";
    }

    return 0;

}
