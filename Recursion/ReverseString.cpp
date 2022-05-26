#include<bits/stdc++.h>
using namespace std;
void reverse(string &str,int i,int j)
{
     cout <<"Process for calling the function = "<<str<<endl;

    if(i>j)
        return ;

    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);    
}
int main()
{
   string name="Rohit";
    reverse(name,0,name.length()-1);
     cout <<"After call the function = "<<name<<endl;
    return 0;
}