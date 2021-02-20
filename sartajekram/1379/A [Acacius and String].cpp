#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)
#define mod 998244353

int main(void)
{
    fastio;

    int t;
    cin >> t;
    string a="abacaba";

    while(t--)
    {
        int n,i,x=0,y=0,j,k;
        string s;
        cin >> n >> s;

        for(i=0; i<n; i++)
        {
            for(j=i,k=0; k<7&&j<n; j++,k++)
            {
                if(s[j]==a[k]);
                else
                    break;
            }
            if(k==7)
                x++;
        }

        if(x==1)
        {
            cout << "YES\n";
            for(i=0; i<n; i++)
            {
                if(s[i]!='?')
                    cout << s[i];
                else
                    cout << 'z';
            }
            cout << "\n";
        }
        else if(x>1)
            cout << "NO\n";
        else
        {
            for(i=0; i<n; i++)
            {
                for(j=i,k=0; k<7&&j<n; j++,k++)
                {
                    if(s[j]==a[k]);
                    else if(s[j]=='?');
                    else
                        break;
                }
                if(k==7)
                {
                    for(k=3; j<n&&k<7; k++,j++)
                    {
                        if(s[j]==a[k]);
                        else
                            break;
                    }
                    if(k<7)
                    {
                        for(j=i+7,k=1; k<7&&j<n; j++,k++)
                        {
                            if(s[j]==a[k]);
                            else
                                break;
                        }
                        if(k<7)
                        {
                            y++;
                            for(j=i,k=0; k<7&&j<n; j++,k++)
                            {
                                s[j]=a[k];
                            }
                            break;
                        }
                        else
                        {
                            for(; i<n; i++)
                            {
                                if(s[i]=='?')
                                {
                                    s[i]='z';
                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        for(; i<n; i++)
                        {
                            if(s[i]=='?')
                            {
                                s[i]='z';
                                break;
                            }
                        }
                    }
                }
            }
            if(y)
            {
                cout << "YES\n";
                for(i=0; i<n; i++)
                {
                    if(s[i]!='?')
                        cout << s[i];
                    else
                        cout << 'z';
                }
                cout << "\n";
            }
            else
                cout << "NO\n";
        }
    }

    return 0;
}
