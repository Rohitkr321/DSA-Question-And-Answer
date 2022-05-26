#include<bits/stdc++.h>
using namespace std;
int power(long long int n)
{
    if(n==0) //Base Case.
        return 1;
    /*    
        * int smallerPrblem=power(n-1);
        * int BigProblem=2*smallerPrblem;
        * return  BigProblem; 
    */
    return 2*power(n-1);    //Recursive Relation.
    
}
int main()
{
    long long int n;
    cin>>n;
    long long int  ans=power(n);
    cout <<"Power of 2 is "<<ans<<endl;
    return 0;
}