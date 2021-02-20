#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007


int main(void)
{
    //fastio;

    int t;
    cin >> t;
    int n,a[105],i,j;
    char c[205];
    while(t--)
    {
        cin >> n;
        for(i=0;i<n;i++)cin >> a[i];
        for(j=0;j<70;j++)
        {
            cout << 'a';
            c[j]='a';
        }
        cout << "\n";
        for(i=0;i<n;i++)
        {
            for(j=0;j<a[i];j++)
            {
                cout << (char)c[j];
            }
            if(c[j]=='a')c[j]='z';
            else c[j]='a';
            cout << (char)c[j];
            j++;
            for(;j<70;j++)
            {
                c[j]='a';
                cout << (char)c[j];
            }
            cout << "\n";
        }
    }

    return 0;
}

