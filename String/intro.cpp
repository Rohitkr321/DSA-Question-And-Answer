#include<bits/stdc++.h>
using namespace std;
int getlength(char name[])
{
    int ans=0;
    for(int i=0; name[i] !='\0';i++){
        ans++;
    }
    return ans;
}
int main()
{
    char name[20];
    cin>>name;
    cout <<"Length:-"<<getlength(name)<<endl;
    return 0;
}