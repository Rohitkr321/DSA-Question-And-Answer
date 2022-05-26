#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2 ;i<n ; i++)
    {
        if( n % i == 0)
        {
            return false; // return false
        }
    }
    return true; // return true
}
void whichnumber(int n)
{
    int count=0;
    for(int i=1 ; i<=n ; i++)
    {
        if(isprime(i))
        {
            count++;
            cout << i <<endl;
        }
    }
   cout <<count<<endl;
}

int main()
{
    int n;
    cout << "Enter a number = " ;
    cin >> n;
    whichnumber(n);
}