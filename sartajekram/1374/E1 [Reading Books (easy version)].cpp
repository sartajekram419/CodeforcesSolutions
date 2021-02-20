#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

vector<ll>f,s,both;

int main(void)
{
    fastio;

    ll n,k,ans=0,fl,fi,bl,bi,sl,si,t,ka=0,kb=0,i;
    int a,b;
    cin >> n >> k;

    for(i=0;i<n;i++)
    {
        cin >> t >> a >> b;
        if(a&&b)
        {
            both.push_back(t);
            ka++;
            kb++;
        }
        else if(a)
        {
            ka++;
            f.push_back(t);
        }
        else if(b)
        {
            kb++;
            s.push_back(t);
        }
    }
    sort(f.begin(),f.end());
    sort(s.begin(),s.end());
    sort(both.begin(),both.end());

    if(ka<k||kb<k)cout << "-1\n";
    else
    {
        fi=0;
        si=0;
        bi=0;
        fl=f.size();
        sl=s.size();
        bl=both.size();
        while(k&&fi<fl&&si<sl&&bi<bl)
        {
            if(f[fi]+s[si]<both[bi])
            {
                ans=ans+f[fi]+s[si];
                fi++;si++;
            }
            else
            {
                ans=ans+both[bi];
                bi++;
            }
            k--;
        }
        if(k)
        {
            if(fi==fl||si==sl)
            {
                while(k)
                {
                    ans=ans+both[bi];
                    bi++;
                    k--;
                }
            }
            else
            {
                while(k)
                {
                    ans=ans+f[fi]+s[si];
                    fi++;si++;
                    k--;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
