#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    string s; cin >> s;
    string s1,s2;
    int a,b; cin >> a >> b;
    int cnt=0;
    for(int i=1; i<s.length(); i++)
    {
        s1 = s.substr(0,i);
        s2 = s.substr(i,s.length());
        if(s2[0]!='0')
        {
          if(stol(s1)%a==0 && stol(s2)%b==0) 
        {
            cout << "YES" << endl;
            cout << s1 << "\n" << s2;
            cnt++;
        }
        }
    }
    if(cnt==0) cout << "NO";

    
}