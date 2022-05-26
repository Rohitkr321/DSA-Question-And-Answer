#include<bits/stdc++.h>
using namespace std;

int evenodd(int num)
{
    
    //This logic is true.
    if(num & 1)            //If we do (num&1) then we get 1 and 1 is odd number . 
    {
        return 1; //it means it is odd due to 1 is odd number .
    }
    return 0;
    /*
   This logic is also true. 
   if(num %2 == 0)
   {
       return 0;
   }
  return 1; 
  */
}
int main()
{
    int num;
    cin >> num;
   bool ans= evenodd(num);

   if(ans==0)
   {
       cout << "It's  a Even number" << endl;
   }
   else
   {
       cout << "it's a odd number " << endl;
   }
}