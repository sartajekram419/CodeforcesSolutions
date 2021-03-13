#include<bits/stdc++.h>
using namespace std;

vector<long long int>v;
vector<long long int>::iterator upper;

int main(void)
{
    long long int t,n,i,c=0,m=0,x;
    cin >> n >> t;
    long long int a,d,total;
    cin >> a;
    v.push_back(a);
    total=a;
    if(total<=t)c++;
    else total=0;

    for(i=1;i<n;i++)
    {
        cin >> a;
        v.push_back(a);
        total=total+a;
        v[i]=v[i-1]+v[i];
        if(total<=t)c++;
        else
        {
            if(c>m)m=c;
            d=v[i]-t;
            upper=upper_bound(v.begin(),v.end(),d);
            if(upper==v.begin())x=0;
            else
            {
                upper--;
                if(*upper==d)x=upper-v.begin();
                else
                {
                    upper++;
                    x=upper-v.begin();
                }
            }
            c=i-x;
            total=v[i]-(*(upper));
        }
    }
    if(m<c)m=c;
    cout << m ;
    return 0;
}