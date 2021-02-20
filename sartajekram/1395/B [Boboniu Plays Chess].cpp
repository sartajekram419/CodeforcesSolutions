#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

bool a[105][105];

int main(void)
{
        fastio;

        int n,m,x,y,c;
        cin >> n >> m >> x >> y;

        for(c=0;c<n*m;)
        {
            for(;;)
            {
                if(a[x][y])
                {
                    if(y==1)y=m;
                    else y--;
                    x++;
                    break;
                }
                cout << x << " " << y << "\n";
                a[x][y]=1;
                c++;
                y++;
                if(y>m)y=1;
            }
            if(x>n)x=1;
        }

        return 0;

}
