#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

vector<pair<int,int>>v;
vector<pair<int,int>>:: iterator it;

int main()
{
    fastio;

    int n,a,b,i;
    bool ind=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    it=v.begin();
    a=it->second;
    it++;
    for(;it!=v.end();it++)
    {
        if(it->second<a){ind=1;break;}
        a=it->second;
    }
    if(ind)cout << "Happy Alex";
    else cout << "Poor Alex";

    return 0;
}