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
    ll n,m,a,i,j;

    while(t--)
    {
        bool ind=0;
        cin >> n >> m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin >> a;
                if(i==0&&(j==0||j==m-1)&&a>2)ind=1;
                else if(i==n-1&&(j==0||j==m-1)&&a>2)ind=1;
                else if(i==0&&a>3)ind=1;
                else if(j==0&&a>3)ind=1;
                else if(i==n-1&&a>3)ind=1;
                else if(j==m-1&&a>3)ind=1;
                else if(a>4) ind=1;
            }
        }

        if(ind)cout << "NO\n";
        else
        {
            cout << "YES\n";
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(i==0&&(j==0||j==m-1))cout << "2 ";
                    else if(i==n-1&&(j==0||j==m-1))cout << "2 ";
                    else if(i==0)cout << "3 ";
                    else if(j==0)cout << "3 ";
                    else if(i==n-1)cout << "3 ";
                    else if(j==m-1)cout << "3 ";
                    else cout << "4 ";
                }
                cout << "\n";
            }
        }
    }

    return 0;
}
