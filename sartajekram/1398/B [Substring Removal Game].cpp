#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

int main(void)
{
        fastio;

        int t;
        cin >> t;

        while(t--)
        {
                string s;
                cin >> s;
                int l=s.size(),i,c=0,x=0,y=0;
                vector<int>v;
                for(i=0;i<l;i++)
                {
                    if(s[i]=='1')c++;
                    else
                    {
                        v.push_back(c);
                        c=0;
                    }
                }
                if(c)v.push_back(c);
                sort(v.begin(),v.end());
                l=v.size();
                for(i=0;i<l;i++)
                {
                    if(i%2)y=y+v[i];
                    else x=x+v[i];
                }
                cout << max(x,y) << "\n";
        }

        return 0;

}
