#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

map<int,int>m;
map<int,int>:: iterator it;

int main(void)
{

        fastio;

        int t;
        cin >> t;

        while(t--)
        {
                int n,i,mx=0,ans=0,c=0,x,a;
                bool ind=0;
                priority_queue<int>pq;
                cin >> n;
                for(i=0;i<n;i++)
                {
                    cin >> a;
                    m[a]++;
                }

                for(it=m.begin();it!=m.end();it++)
                {
                    mx=max(mx,it->second);
                    pq.push(it->second);
                }

                pq.pop();
                c=0;
                while(!pq.empty())
                {
                    x=pq.top();
                    if(x!=mx)break;
                    pq.pop();
                    c=c+x;
                    if(c>=mx){ans++;c=c-mx;}
                }
                mx--;
                while(!pq.empty())
                {
                    x=pq.top();
                    pq.pop();
                    c=c+x;
                    if(c>=mx){ans++;c=c-mx;}
                }
                cout << ans << "\n";

                m.clear();
        }

        return 0;

}
