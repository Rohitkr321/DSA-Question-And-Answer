#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n;
       cin>>n;
       int prices[n];
       int temp=prices[0];
        int maximum=0;
        for(int i=0;i<n;i++)
    {
            cin>>prices[i];
         if(temp>prices[i]) 
         {
             temp+=prices[i];
         }
            
    
    }
            cout<<temp;
            cout<<maximum;
}