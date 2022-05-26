#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int num)
{
    int firstnumber=0;
    int secondnumber=1;
    int sum=0;
    int ans=0;
    int nth=0;
    cout << "Fibonacci series are = " ;
    cout << firstnumber <<" ";
    cout <<secondnumber << " ";
    for(int i= 0 ; i<=num; i++)
    {
        sum = firstnumber + secondnumber;
        cout << sum << " ";
        firstnumber = secondnumber;
        secondnumber = sum;
        ans=+sum;
        if(num-2==i)               //if(num-3==i) 
        {                          //nth=secondnumber;
            nth=firstnumber;
        }
    }
    return nth;
}
int main()
{
    int number;
    cout << "Enter the value of number = ";
    cin >> number;
    int ans =Fibonacci(number);
    cout << endl;
    cout << "The " << number <<"th Fibonacci number is = " << ans ;
    
}