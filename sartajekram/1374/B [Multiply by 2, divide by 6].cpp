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
    ll n,x,two,three;
    while(t--)
    {
        cin >> n;
        x=n;
        two=0;
        three=0;
        while(x%2==0)
        {
            x=x/2;
            two++;
        }
        while(x%3==0)
        {
            x=x/3;
            three++;
        }
        if(x!=1)cout << "-1\n";
        else
        {
            if(three<two)cout << "-1\n";
            else
            {
                cout << two+(three-two)*2 << "\n";
            }
        }
    }

    return 0;
}
