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
        int c=0,x=0;
        cin >> n;
        int l=0,r=n-1;
        cin >> a >> b;

        for(i=n-1;i>=0;i--)
        {
            if(x%2)
            {
                if(a[l]!=b[i]&&x%2==0)
                {
                    if(a[r]!=b[i]&&x%2==0)
                    {
                        c++;
                        v.push_back(i+1);
                        r--;
                    }
                    else if(a[r]!=b[i])
                    {
                        c=c+2;
                        v.push_back(1);
                        v.push_back(i+1);
                        r--;
                    }
                    else if(a[r]==b[i]&&x%2==0)
                    {
                        c=c+2;
                        v.push_back(1);
                        v.push_back(i+1);
                        r--;
                    }
                    else
                    {
                        c++;
                        v.push_back(i+1);
                        r--;
                    }

                    x++;
                }
                else if(a[l]==b[i]&&x%2)
                {
                    if(a[r]!=b[i]&&x%2==0)
                    {
                        c++;
                        v.push_back(i+1);
                        r--;
                    }
                    else if(a[r]!=b[i])
                    {
                        c=c+2;
                        v.push_back(1);
                        v.push_back(i+1);
                        r--;
                    }
                    else if(a[r]==b[i]&&x%2==0)
                    {
                        c=c+2;
                        v.push_back(1);
                        v.push_back(i+1);
                        r--;
                    }
                    else
                    {
                        c++;
                        v.push_back(i+1);
                        r--;
                    }

                    x++;
                }
                else l++;
            }
            else
            {
                if(a[r]!=b[i]&&x%2==0)
                {
                    if(a[l]!=b[i]&&x%2==0)
                    {
                        c++;
                        v.push_back(i+1);
                        l++;
                    }
                    else if(a[l]!=b[i])
                    {
                        c=c+2;
                        v.push_back(1);
                        v.push_back(i+1);
                        l++;
                    }
                    else if(a[l]==b[i]&&x%2==0)
                    {
                        c=c+2;
                        v.push_back(1);
                        v.push_back(i+1);
                        l++;
                    }
                    else
                    {
                        c++;
                        v.push_back(i+1);
                        l++;
                    }
                    x++;
                }
                else if(a[r]==b[i]&&x%2)
                {
                    if(a[l]!=b[i]&&x%2==0)
                    {
                        c++;
                        v.push_back(i+1);
                        l++;
                    }
                    else if(a[l]!=b[i])
                    {
                        c=c+2;
                        v.push_back(1);
                        v.push_back(i+1);
                        l++;
                    }
                    else if(a[l]==b[i]&&x%2==0)
                    {
                        c=c+2;
                        v.push_back(1);
                        v.push_back(i+1);
                        l++;
                    }
                    else
                    {
                        c++;
                        v.push_back(i+1);
                        l++;
                    }
                    x++;
                }
                else r--;
            }
        }

        cout << c << " ";
        for(i=0;i<c;i++)cout << v[i] << " ";
        cout << "\n";
        v.clear();
    }

    return 0;
}

