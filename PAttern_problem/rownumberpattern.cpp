#include<bits/stdc++.h>
using namespace std;

int main()
{
   int number;
   cin>>number;
   int row=1;
   while(row<=number)
   {
       int column=1;
       int value=column+row-1;
       while(column<=number)
       {
           cout<<value<<" ";
           value++;
           column++;
       }
       cout<<endl;
       row++;
   }
}
