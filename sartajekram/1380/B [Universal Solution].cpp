#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 998244353

int main(void)
{
    fastio;

    int t;
    cin >> t;
    string str;
    while(t--)
    {
        char c;
        cin >> str;
        int l=str.size();
        int r=0,s=0,p=0,i;
        for(i=0;i<l;i++)
        {
            if(str[i]=='R')r++;
            else if(str[i]=='S')s++;
            else p++;
        }
        if(r>=p&&r>=s)c='P';
        else if(p>=r&&p>=s)c='S';
        else c='R';

        for(i=0;i<l;i++)cout << c ;
        cout << "\n";
    }

    return 0;
}



