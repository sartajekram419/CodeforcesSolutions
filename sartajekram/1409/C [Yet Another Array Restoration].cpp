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
                ll n,x,y,d,i,c,v;
                cin >> n >> x >> y;
                c=n;
                d=y-x;
                while(d%(c-1))c--;

                v=x;
                d=d/(c-1);
                //cout << c << "\n";
                for(i=0;i<c;i++)
                {
                    cout << v << " ";
                    v=v+d;
                }

                n=n-c;
                v=x-d;
                for(;v>0&&n;n--)
                {
                    cout << v << " ";
                    v=v-d;
                }

                v=y+d;
                for(;n;n--)
                {
                    cout << v << " ";
                    v=v+d;
                }

                cout << "\n";
        }

        return 0;

}
