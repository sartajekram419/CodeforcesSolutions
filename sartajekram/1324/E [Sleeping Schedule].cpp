#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 10000000
#define pi acos(-1.0)
#define mod 1000000007

int n,h,l,r,a[2005];
int dp[2005][2005];

int f(int x,int i)
{
    int c;
    if(i>=n-1)
    {
        if((x+h)%h>=l&&(x+h)%h<=r)return 1;
        else return 0;
    }
    if(dp[x][i]!=-1)return dp[x][i];

    if((x+h)%h>=l&&(x+h)%h<=r)c=1;
    else c=0;

    dp[x][i]=c+max(f((x+a[i+1]-1+h)%h,i+1),f((x+a[i+1]+h)%h,i+1));
    return dp[x][i];
}

int main(void)
{
    fastio;

    int i;
    memset(dp,-1,sizeof(dp));
    cin >> n >> h >> l >> r;
    for(i=0;i<n;i++)cin >> a[i];
    cout << max(f(a[0]-1,0),f(a[0],0));

    return 0;
}






//freopen(".txt","r",stdin);
//freopen("output.txt","w",stdout);
