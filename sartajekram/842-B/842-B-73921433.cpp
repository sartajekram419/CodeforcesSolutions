#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;

    double d,r,x,y,r1,i,o;
    cin >> d >> r;

    int n,c=0;
    cin >> n;

    while(n--)
    {
        cin >> x >> y >> r1;
        i=sqrt(x*x+y*y)-r1;
        o=sqrt(x*x+y*y)+r1;
        if(i>=(d-r)&&o<=d)c++;
    }

    cout << c;

    return 0;
}