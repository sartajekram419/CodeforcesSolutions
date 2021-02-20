#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

int main(void)
{
    fastio;

    int t;
    cin >> t;
    int n,c,ans,i;
    string s;
    while(t--)
    {
        ans=0;
        c=0;
        cin >> n >> s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')c++;
            else c--;
            if(c<0)ans=max(ans,-c);
        }
        cout << ans << "\n";
    }

    return 0;
}
