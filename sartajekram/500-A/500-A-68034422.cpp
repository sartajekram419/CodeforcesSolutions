#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,t,i,c=0;
    scanf("%i %i",&n,&t);
    int a[n];
    a[0]=1;
    if(a[0]==t)c=1;
    for(i=1;i<n;i++)scanf("%i",&a[i]);

    for(i=1;i<n;i++)
    {
        a[i]=a[i]+i;
        if(a[i]==t){c=1;break;}
        else i=a[i]-1;
    }
    if(c)printf("YES");
    else printf("NO");
    return 0;
}