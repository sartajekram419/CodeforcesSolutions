#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

string s="codeforces";

int main()
{
    fastio;

    ll k,x,i,y,j,z;
    cin >> k;
    for(i=1;;i++)
    {
        if(pow(i,10)>=k)break;
    }
    x=i;
    for(i=0;i<10;i++)
    {
        y=pow(x,i+1)*pow(x-1,9-i);
        if(y>=k)
        {
            z=i+1;
            break;
        }
    }
    for(i=0;i<10;i++)
    {
        if(i<z)
        {
            for(j=1;j<=x;j++)cout << s[i];
        }
        else
        {
            for(j=1;j<x;j++)cout << s[i];
        }
    }

    return 0;
}
