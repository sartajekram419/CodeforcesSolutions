#include<bits/stdc++.h>
using namespace std;
 
int main(void)
{
    int n,i,w=0,x=0,y=0,z=0,p=100;
    char c[105];
    gets(c);
    n=strlen(c);
    for(i=0;i<n;i++)
    {
        if(c[i]=='n')w++;
        else if(c[i]=='e')x++;
        else if(c[i]=='i')y++;
        else if(c[i]=='t')z++;
    }
    if(w<=3)w=w/3;
    else
    {
        w=w-3;
        w=w/2+1;
    }
    x=x/3;
    if(w<p)p=w;
    if(x<p)p=x;
    if(y<p)p=y;
    if(z<p)p=z;
    printf("%i",p);
 
    return 0;
}