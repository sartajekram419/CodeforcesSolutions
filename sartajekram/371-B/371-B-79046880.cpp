#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18

ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

ll f(ll a,ll b)
{
    ll x=gcd(a,b),ans=0;
    bool ind=1;
    int p=a/x;
    while(p!=1&&ind)
    {
        if(p%2==0){p=p/2;ans++;}
        else if(p%3==0){p=p/3;ans++;}
        else if(p%5==0){p=p/5;ans++;}
        else ind=0;
    }
    p=b/x;
    while(p!=1&&ind)
    {
        if(p%2==0){p=p/2;ans++;}
        else if(p%3==0){p=p/3;ans++;}
        else if(p%5==0){p=p/5;ans++;}
        else ind=0;
    }
    if(ind)return ans;
    else return -1;
}

int main(void)
{
    fastio;
    ll int a,b;
    cin >> a >> b;
    if(a<b)swap(a,b);
    cout << f(a,b);
    return 0;
}