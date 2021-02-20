#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

vector<int>v[3000],g;
bool p[3000];
bool vis[3000];

bool check(int s,int e)
{
    if(s==e)return p[s]=1;
    if(p[s])return 1;

    vis[s]=1;
    bool ind=0;

    int l=v[s].size();
    for(int i=0;i<l;i++)
    {
        if(vis[v[s][i]]==0)
        {
            p[v[s][i]]=ind=check(v[s][i],e);
            if(ind)break;
        }
    }

    return p[s]=ind;
}

int main()
{
    fastio;

    int t;
    cin >> t;
    int n,m,i,j;
    string s[55];
    bool ind=0;

    while(t--)
    {
        cin >> n >> m;
        ind=0;
        for(j=0;j<=m+1;j++)s[0].push_back('X');
        for(i=1;i<=n;i++)
        {
            cin >> s[i];
            s[i]= "X"+s[i]+"X";
        }
        for(j=0;j<=m+1;j++)s[n+1].push_back('X');

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(s[i][j]=='G')g.push_back(i*m+j);
                else if(s[i][j]=='B')
                {
                    if(s[i+1][j]=='.')s[i+1][j]='#';
                    else if(s[i+1][j]=='G'){ind=1;break;}

                    if(s[i-1][j]=='.')s[i-1][j]='#';
                    else if(s[i-1][j]=='G'){ind=1;break;}

                    if(s[i][j+1]=='.')s[i][j+1]='#';
                    else if(s[i][j+1]=='G'){ind=1;break;}

                    if(s[i][j-1]=='.')s[i][j-1]='#';
                    else if(s[i][j-1]=='G'){ind=1;break;}
                }
            }
            if(ind)break;
        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(s[i][j]=='.'||s[i][j]=='G')
                {
                    if(s[i+1][j]=='.'||s[i+1][j]=='G')
                    {
                        v[(i)*m+j].push_back((i+1)*m+j);
                        v[(i+1)*m+j].push_back(i*m+j);
                    }
                    if(s[i-1][j]=='.'||s[i-1][j]=='G')
                    {
                        v[(i)*m+j].push_back((i-1)*m+j);
                        v[(i-1)*m+j].push_back(i*m+j);
                    }
                    if(s[i][j+1]=='.'||s[i][j+1]=='G')
                    {
                        v[(i)*m+j].push_back(i*m+j+1);
                        v[i*m+j+1].push_back(i*m+j);
                    }
                    if(s[i][j-1]=='.'||s[i][j-1]=='G')
                    {
                        v[(i)*m+j].push_back(i*m+j-1);
                        v[i*m+j-1].push_back(i*m+j);
                    }
                }
            }
            if(ind)break;
        }

        int l=g.size();
        for(i=0;i<l;i++)
        {
            for(j=0;j<(n+1)*(m+1);j++)vis[j]=0;

            if(!check(g[i],n*m+m)){ind=1;break;}
        }

        if(ind)cout << "No\n";
        else cout << "Yes\n";

        for(i=0;i<=(n+1)*(m+1);i++)
        {
            v[i].clear();
            p[i]=0;
        }
        for(i=0;i<=n+1;i++)s[i].clear();
        g.clear();
    }

    return 0;
}
