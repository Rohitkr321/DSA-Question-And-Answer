#include<bits/stdc++.h>
using namespace std;
string remove(string s, string part)
{
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main()
{
    string s;
    string part;
    getline(cin,s);
    getline(cin,part);
    string ans=remove(s,part);
    cout <<ans<<endl;
    return 0;
}