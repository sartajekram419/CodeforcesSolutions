#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;

    double d,r,x,y,r1,i,o,a;
    cin >> d >> r;

    int n,c=0;
    cin >> n;

    while(n--)
    {
        cin >> x >> y >> r1;
        a=sqrt(x*x+y*y);
        i=a-r1;
        o=a+r1;
        if(i>=(d-r)&&o<=d)c++;
    }

    cout << c;

    return 0;
}