#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,i,j=0;
    cin >> n;
    int a[n],c[n];
    for(i=0;i<n;i++){cin >> a[i];c[i]=1;}
    sort(a,a+n);
    for(i=n-1;i>0;i--)
    {
        if(a[i]==a[i-1]){c[j]++;}
        else j++;
    }
    for(i=0;i<=j;i++)
    {
        if(c[i]%2){cout << "Conan";return 0;}
    }
    cout << "Agasa";

    return 0;
}