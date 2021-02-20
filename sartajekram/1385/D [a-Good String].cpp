#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 998244353

string s;

int f(int l,int r,int c)
{
    if(r-l<=1)
    {
        if(c==s[l])return 0;
        else return 1;
    }

    int m=(l+r)/2,a=0,b=0,i;

    for(i=l;i<m;i++)
    {
        if(s[i]!=c)a++;
    }
    a=a+f(m,r,c+1);

    for(i=m;i<r;i++)
    {
        if(s[i]!=c)b++;
    }
    b=b+f(l,m,c+1);

    return min(a,b);
}

int main(void)
{
    fastio;

    int t;
    cin >> t;

    int n;
    while(t--)
    {
        cin >> n ;
        cin >> s;
        cout << f(0,n,'a') << "\n";
    }

    return 0;
}
