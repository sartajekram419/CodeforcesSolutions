#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int ind=0,i;
    string s;
    cin >> s;

    for(i=0;i<s.size();i++)
    {
        if(i+2<s.size()&&s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')i=i+2;
        else if(i+1<s.size()&&s[i]=='1'&&s[i+1]=='4')i=i+1;
        else if(s[i]=='1');
        else ind=1;
    }

    if(ind)cout << "NO";
    else cout << "YES";

    return 0;
}