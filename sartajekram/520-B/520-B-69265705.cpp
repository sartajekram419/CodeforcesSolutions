#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,m,c=0,i,p,a,b,ind=1;
    scanf("%i %i",&n,&m);
    if(n>=m)printf("%i",n-m);
    else
    {
        a=n;
        b=m;
        int ans=0;
        while(1)
        {
            if(b<n)a--;
            ans++;
            if(b%2)
            {
                b++;
            }
            else
            {
                b=b/2;
            }
            if(ind&&b<n){m=b;ind=0;}
            if(b==n||m==a)break;
        }
        cout << ans;
    }
    return 0;
}