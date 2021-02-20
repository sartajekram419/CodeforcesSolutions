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

        while(t--)
        {
                map<ll,ll>m;
                ll i,x,l,n,ans=0,sum=0;
                string s;

                cin >> n >> s;

                m[0]=1;
                for(i=0;i<n;i++)
                {
                    x=s[i]-'0';

                    sum+=x;
                    ans=ans+m[sum-i-1];
                    m[sum-i-1]++;
                }

                cout << ans << "\n";
        }

        return 0;

}
