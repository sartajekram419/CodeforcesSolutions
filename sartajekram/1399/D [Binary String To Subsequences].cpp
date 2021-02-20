#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int a[200005];
vector<int>v[2];

int main(void)
{
    fastio ;

    int t;
    cin >> t;
    int n,i,x,m,c;
    string s;

    while(t--)
    {
        cin >> n >> s;
        c=0;
        for(i=0;i<n;i++)
        {
            x=s[i]-'0';
            if(v[x].size()==0)v[x].push_back(++c);

            m=v[x].back();
            a[i]=m;
            v[x].pop_back();
            v[x^1].push_back(m);
        }
        cout << c << "\n";
        for(i=0;i<n;i++)cout << a[i] << " ";
        cout << "\n";
        v[0].clear();
        v[1].clear();
    }

    return 0 ;
}
