#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin>>number;
    int result;
    for(int i=2;i<number;i++)
    {
        
        if(number%i==0)
        {
            cout<<"Not Prime";
            break;
        }
        else if(number%i!=0)
        {
            cout<<"Prime";
            break;
        }
    }
}

    /*
    for(int i=0;i<=number;i+=2)
    {
        cout<<i<<endl;
        x & 1 produces a value that is either 1 or 0, depending on the least 
        significant bit of x: if the last bit is 1, the result of x & 1 is 1; otherwise, it is 0. 
        This is a bitwise AND operation.
        if(i&1)
        {
            cout<<"hello " <<i<<endl;
            continue;
        }
        i++;
       
    }
    */