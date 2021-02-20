#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

vector<ll>v;

int main(void)
{
    fastio;

    int t;
    cin >> t;
    ll n,i,j;
    ll a[100005],s,c;
    while(t--)
    {
        bool ind=0;
        j=0;
        s=0;
        c=0;
        cin >> n;
        for(i=0;i<n;i++)cin >> a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]==(ll)1&&i<n-1)
            {
                if(ind==0)ind=1;
                else ind=0;
            }
            else break;
        }
        /*c=0;
        for(;i<n;i++)
        {
            if(a[i]==1)c++;
            else
            {
                if(c)v.push_back(c);
                c=0;
            }
        }
        for(i=0;i<v.size();i++)
        {

        }*/

        if(ind==0)cout << "First\n";
        else cout << "Second\n";
    }

    return 0;
}

