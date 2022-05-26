#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    char opertor;
    cout << "Enter the value of a is " <<endl;
    cin>>a;

    cout << "Enter the value of b is " <<endl;
    cin>>b;

    cout << "What you want to do, Like + - ....?" <<endl;
    cin>>opertor;

    switch(opertor)
    {
        case '+': cout <<"The sum of  a and b is "<< a+b <<endl;
                break;
        case '-': cout <<"The sbtraction of  a and b is "<< a-b <<endl; 
                break;  
        case '/': cout <<"The divison of  a and b is "<< a/b <<endl;               
                break;
        case '*': cout <<"The product of  a and b is "<< a*b <<endl;
                break;
        case '%': cout <<"The modulas of  a and b is "<< a%b <<endl;
                break;
        default: cout <<"Please Enter a vlied opertor" <<endl;        
    }
    
}