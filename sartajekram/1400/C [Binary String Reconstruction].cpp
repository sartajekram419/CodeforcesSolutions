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
        int a[100005];

        while(t--)
        {
                int x,i;
                string s;
                cin >> s >> x;
                int l=s.size();
                for(i=0;i<l;i++)a[i]=-1;
                bool ind=0;

                for(i=0;i<l;i++)
                {
                    if(s[i]=='1')
                    {
                        if(i>=x)
                        {
                            if(a[i-x]==0);
                            else {a[i-x]=1;continue;}
                        }

                        if(i+x>=l){ind=1;break;}

                        if(a[i+x]==0){ind=1;break;}
                        else
                        {
                            a[i+x]=1;
                        }
                    }
                    else
                    {
                        if(i>=x)
                        {
                            if(a[i-x]==1){ind=1;break;}
                            else a[i-x]=0;
                        }

                        if(i+x>=l){continue;}

                        if(a[i+x]==1){ind=1;break;}
                        else a[i+x]=0;
                    }

                }
                if(ind)cout << "-1\n";
                else
                {

                    for(i=0;i<l;i++)
                    {
                        if(a[i]==-1||a[i]==1)cout << '1';
                        else cout << '0';
                    }
                    cout << "\n";
                }
        }

        return 0;

}
