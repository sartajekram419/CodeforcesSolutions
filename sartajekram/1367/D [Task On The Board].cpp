#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define inf 1e18
#define pi acos(-1.0)

int c[26];
vector<int>z,cur;

int main(void)
{
    fastio;

    int t;
    cin >> t;

    string s;
    char ans[55];
    int m,b[55],l,i,j,k;

    while(t--)
    {
        for(i=0;i<26;i++)c[i]=0;
        cin >> s;
        l=s.size();
        for(i=0;i<l;i++)c[s[i]-'a']++;

        cin >> m;
        for(i=0;i<m;i++)
        {
            cin >> b[i];
            if(b[i]==0)cur.push_back(i);
        }

        j=25;
        while(!cur.empty()&&j>=0)
        {
            l=cur.size();
            if(c[j]<l){j--;continue;}

            for(i=0;i<l;i++)
            {
                ans[cur[i]]=(char)('a'+j);

                for(k=0;k<m;k++)
                {
                    if(b[k])
                    {
                        b[k]=b[k]-abs(cur[i]-k);
                        if(b[k]==0)z.push_back(k);
                    }
                }
            }
            cur.clear();
            cur=z;
            z.clear();
            j--;
        }

        for(i=0;i<m;i++)cout << ans[i];
        cout << "\n";
        s.clear();
        cur.clear();
        z.clear();
    }

    return 0;
}
