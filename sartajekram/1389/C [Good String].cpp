#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

vector<int>v[10];
int p[10];

int main(void)
{
    fastio;

    int t;
    cin >> t;
    string s;
    int i,j,l,r,ans,last,m,n,c,len;

    while(t--)
    {
        ans=0;
        cin >> s;
        len=s.size();
        for(i=0;i<len;i++){v[s[i]-'0'].push_back(i);p[s[i]-'0']++;}

        for(i=0;i<10;i++)
        {
            ans=max(ans,p[i]);
            if(p[i]==0)continue;

            for(j=i+1;j<10;j++)
            {
                if(p[j]==0)continue;

                if(v[i][0]<v[j][0])
                {
                    last=v[i][0]-1;
                    l=i;
                    r=j;
                }
                else
                {
                    last=v[j][0]-1;
                    l=j;
                    r=i;
                }

                c=0;
                for(m=0,n=0;m<p[l]&&n<p[r];)
                {
                    bool ind=0;
                    while(1)
                    {
                        if(m==p[l])break;
                        if(last>v[l][m])m++;
                        else
                        {
                            last=v[l][m];
                            ind=1;
                            m++;
                            break;
                        }
                    }
                    while(ind)
                    {
                        if(n==p[r])break;
                        if(last>v[r][n])n++;
                        else
                        {
                            last=v[r][n];
                            c=c+2;
                            n++;
                            break;
                        }
                    }
                }

                ans=max(ans,c);
            }
        }



        cout << len-ans << "\n";
        for(i=0;i<10;i++){v[i].clear();p[i]=0;}
    }

    return 0;
}

