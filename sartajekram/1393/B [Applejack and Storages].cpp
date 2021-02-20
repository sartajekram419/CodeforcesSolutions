#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

map<int,int>m;
int p[2];

int main(void)
{

        fastio;


            char c;
            int n,i,q,a;
            cin >> n;
            for(i=0;i<n;i++)
            {
                cin >> a;
                m[a]++;
                if(m[a]%4==0)
                {
                    p[1]++;
                    p[0]--;
                }
                else if(m[a]%2==0)
                {
                    p[0]++;
                }
            }
            cin >> q;
            while(q--)
            {
                cin >> c >> a;
                if(c=='+')
                {
                    m[a]++;
                    if(m[a]%4==0)
                    {
                        p[1]++;
                        p[0]--;
                    }
                    else if(m[a]%2==0)
                    {
                        p[0]++;
                    }

                    if(p[1]>0)
                    {
                        if(p[1]>1)cout << "YES\n";
                        else
                        {
                            if(p[0]>1)cout << "YES\n";
                            else cout << "NO\n";
                        }
                    }
                    else cout << "NO\n";
                }
                else if(c=='-')
                {
                    if(m[a]%4==0)
                    {
                        p[1]--;
                        p[0]++;
                    }
                    else if(m[a]%2==0)
                    {
                        p[0]--;
                    }

                    m[a]--;

                    if(p[1]>0)
                    {
                        if(p[1]>1)cout << "YES\n";
                        else
                        {
                            if(p[0]>1)cout << "YES\n";
                            else cout << "NO\n";
                        }
                    }
                    else cout << "NO\n";
                }
            }

        return 0;

}
