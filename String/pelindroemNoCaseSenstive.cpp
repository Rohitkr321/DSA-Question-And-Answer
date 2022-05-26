#include<bits/stdc++.h>
using namespace std;
char toLoweCase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+ 'a';
        return temp;
    }
}
bool pelindroem(char name[],int n)
{
    int start=0;
    int end=n-1;
    for(int i=start;i<=end;i++){
        if(toLoweCase(name[start])!=toLoweCase(name[end])){
            return 0;
        }
        else{
            start++;
            end--;
        }

    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    char name[n];
    cin>>name;
    bool ans=pelindroem(name,n);
    
    if(ans==0){
        cout <<"False"<<endl;
    }
    else{
     cout <<"True"<<endl;
    } 
    return 0;
}