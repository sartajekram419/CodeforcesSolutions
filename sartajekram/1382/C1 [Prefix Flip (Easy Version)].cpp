#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 1000000007

vector<int>v;

int main(void)
{
    fastio;

    int t;
    cin >> t;
    int n,i;
    string a,b;

    while(t--)
    {
        int c=0,j,k;
        cin >> n;
        cin >> a >> b;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]!=b[i])
            {
                if(a[0]!=b[i])
                {
                    c++;
                    v.push_back(i+1);
                    for(j=0,k=i;j<=k;j++,k--)
                    {
                        swap(a[j],a[k]);
                        if(a[j]=='1')a[j]='0';
                        else a[j]='1';

                        if(j!=k)
                        {
                            if(a[k]=='1')a[k]='0';
                            else a[k]='1';
                        }
                    }

                }
                else
                {
                    c++;
                    v.push_back(1);
                    if(a[0]=='1')a[0]='0';
                    else a[0]='1';

                    c++;
                    v.push_back(i+1);
                    for(j=0,k=i;j<=k;j++,k--)
                    {
                        swap(a[j],a[k]);
                        if(a[j]=='1')a[j]='0';
                        else a[j]='1';
                        if(j!=k)
                        {
                            if(a[k]=='1')a[k]='0';
                            else a[k]='1';
                        }

                    }
                }
            }
        }


        cout << c << " ";
        for(i=0;i<c;i++)cout << v[i] << " ";
        cout << "\n";
        v.clear();
    }

    return 0;
}

