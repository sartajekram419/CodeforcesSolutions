#include<bits/stdc++.h>
using namespace std;

vector<int>v;
vector<int>:: iterator ans;

int main(void)
{
    int n,a,m,b,i;
    cin >> n;
    v.push_back(0);
    for(i=1;i<=n;i++)
    {
        cin >> a;
        v.push_back(v[i-1]+a);
    }
    cin >> m;
    for(i=0;i<m;i++)
    {
        cin >> b;
        ans = lower_bound(v.begin(),v.end(),b);
        cout << ans-v.begin() << endl;
    }
    return 0;
}