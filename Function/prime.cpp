#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    // 1 --> prime.
    // 0 --> not a prime.
    for(int i = 2 ; i < n ; i++ )
    {
        if(n % i != 0)
        return 0;
    }
    return 1;
}
int main()
{
    int num;
    cout << "What's the number to check the prime or not. "<< endl;
    cin >> num;

    bool ans = isprime(num);

    if(ans == 1)
    {
        cout << "you enter a Prime number." << endl;
    }
    else
    {
        cout << "you enter number.is not a prime number." << endl;
    }
}