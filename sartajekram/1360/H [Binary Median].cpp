#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

map<ll,bool>nmap;

string DecimalToBinaryString(ll a,ll m)
{
    string binary = "";
    ll mask = 1;
    for(ll i = 0; i <m; i++)
    {
        if((mask&a))
            binary = "1"+binary;
        else
            binary = "0"+binary;
        mask=mask*2;
    }
    return binary;
}

ll bs_to_ll(string s,ll m)
{
    ll mu=1,sum=0,i;
    for(i=m-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            sum=sum+mu;
        }
        mu=mu*2;
    }
    return sum;
}

int main()
{
    fastio;

    int t;
    cin >> t;
    ll n,m,mediun,x,i,total;
    string s[105];
    while(t--)
    {
        cin >> n >> m;
        for(i=0;i<n;i++)
        {
            cin >> s[i];
        }
        mediun=pow(2,m-1)-1;
        total=pow(2,m);

        for(i=0;i<n;i++)
        {
            total--;
            x=bs_to_ll(s[i],m);
            nmap[x]=1;

            if(total%2)
            {
                if(x==mediun)
                {
                    while(nmap.find(mediun)!=nmap.end())
                    {
                        mediun++;
                    }
                }
                else if(x<mediun)
                {
                    mediun++;
                    while(nmap.find(mediun)!=nmap.end())
                    {
                        mediun++;
                    }
                }
            }
            else
            {
                if(x==mediun)
                {
                    while(nmap.find(mediun)!=nmap.end())
                    {
                        mediun--;
                    }
                }
                else if(x>mediun)
                {
                    mediun--;
                    while(nmap.find(mediun)!=nmap.end())
                    {
                        mediun--;
                    }
                }
            }
        }

        cout << DecimalToBinaryString(mediun,m) << "\n";
        nmap.clear();
    }

    return 0;
}
