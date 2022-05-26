#include<bits/stdc++.h>
using namespace std;

int isprime(int num)
{
    // 1 --> prime.
    // 0 --> not a prime.
    // This function chexk number prime or not.
        for(int i = 2 ; i < num ; i++ )
        {
            if(num % i == 0)
            {
               return 1; // return false
            }
        }
    return 0; //return true;
}
int countprime(int n)
{
    //This function count how many number are prime.
    int primecount=0;
    for(int i=2; i<n; i++)
    {
        if(isprime(i)==0)
        {
            primecount++;
        }
    }
    return primecount;
}
int main()
{
    int num;
    cout << "Enter the number = " ;
    cin >> num;
    int ans = countprime(num);
    cout <<"your given number between " << ans << " prime number" << endl;
    
}