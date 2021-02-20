#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define mod 1000000007


int main(void)
{
        fastio;

        int t;
        cin >> t;

        int n,a[55],i;

        while(t--)
        {
                int l=-1,r=-1,c=0;
                cin >> n;
                for(i=0;i<n;i++)
                {
                    cin >> a[i];
                    if(a[i]&& l==-1){l=i,r=i,c++;}
                    else if(a[i])r=i,c++;
                }

                cout << r-l+1-c << "\n";
        }

        return 0;
}
