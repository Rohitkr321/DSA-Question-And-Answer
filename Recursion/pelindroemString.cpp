#include<bits/stdc++.h>
using namespace std;
bool checkPelindroem(string s,int i,int j)
{
    if(i>j)
        return true;
    if(s[i]!=s[j])
        return false;
    else{
        return checkPelindroem(s,i+1,j-1);
    }        
}
int main()
{
    string s;
    getline(cin,s);
    bool ans=checkPelindroem(s,0,s.length()-1);
    if(ans){
        cout <<"Yes"<<endl;
    }
    else{
        cout <<"NO"<<endl;;
    }
    return 0;
}