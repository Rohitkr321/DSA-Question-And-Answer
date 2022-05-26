#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0)// Base case mandotory.
        return 1;
    /*     
      *  int smallerProblem=factorial(n-1);
      *  int bigProblem=n* smallerProblem;
      *  return  bigProblem;
    */
   //factorial function.
   return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    int ans=factorial(n);
    cout <<"Factorail of "<<n<<" is = "<<ans;
    return 0;
}