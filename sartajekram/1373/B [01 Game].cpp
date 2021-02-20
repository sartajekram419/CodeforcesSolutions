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
    string s;
    while(t--)
    {
        int ans=0,one=0,zero=0,i;
        cin >> s;
        int n=s.size();

        for(i=0;i<n;i++)
        {
            if(s[i]=='1')one++;
            else zero++;
        }
        ans=min(one,zero);
        if(ans%2)cout << "DA\n";
        else cout << "NET\n";
    }

    return 0;

}
