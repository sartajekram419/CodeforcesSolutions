#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

vector<int>o,e;

int main()
{
    fastio;

    int t;
    cin >> t;
    ll n,x,c,cnt;
    while(t--)
    {
        bool ind=0;
        cin >> n;
        if(n==1)cout << "FastestFinger\n";
        else if(n==2)cout << "Ashishgup\n";
        else if(n%2)cout << "Ashishgup\n";
        else
        {
            x=n;
            c=0;
            cnt=0;
            while(x%2==0)
            {
                c++;
                x=x/2;
            }
            for(ll i=3;i*i<=x;i=i+2)
            {
                if(x%i==0)
                {
                    cnt++;
                }
            }
            if(x==1)cout << "FastestFinger\n";
            else
            {
                if(c==1)
                {
                    if(cnt==0)cout << "FastestFinger\n";
                    else cout << "Ashishgup\n";
                }
                else cout << "Ashishgup\n";
            }
        }
    }

    return 0;
}
