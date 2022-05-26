#include<bits/stdc++.h>
using namespace std;
int check(string s1 , string s2)
{
    if(s1.length() != s2.length())
        return false;
    string temp = s1+s1;
    return (temp.find(s2) != string::npos);    
}
int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    int ans=check(s1,s2);
    if(ans){
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
    return 0;
}