#include<bits/stdc++.h>
using namespace std;
//function signature.
int factorial(int num)
{
    // Here we find the factorial of given number.
    int fact=1;
    for(int i=num ; i>0 ; i--)
    {
        fact = fact * i ;
    }
    return fact;
    /*
        It's also correct logic.

    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fcat*i;
    }
        return fact;
    */
}
int ncr(int n , int r)
{
    // Here we find the value of nCr
    int numer = factorial(n);
    int domena = factorial(r) * factorial(n-r);
    int ans = numer / domena ;

    return ans;
}
int main()
{
    int n,r;
    cout << "Enter the value of n = " ; 
    cin >> n ;
    cout << "Enter the value of r = " ;
    cin >> r ;
    int ans=ncr( n , r);
    cout << "The value of nCr is = " << ans<< endl;

}