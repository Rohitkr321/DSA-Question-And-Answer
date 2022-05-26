#include<bits/stdc++.h>
using namespace std;
//pass by refrence.
int printnumber(int &n)  
{                    
    n-=5;
    cout << "The number is = " << n <<endl;
    return n;
}
int main()
{
    int n;
    cout << "Enter a number = ";
    cin >> n;
    cout << "This output before calling the function  = " << n <<endl;
    printnumber(n);

    cout << "This output is pass by refrence  = " << n <<endl;

}
/*void printnumber(int n)  it is the pass by value means 
main function gives the value of n and orintnumber 
function store the copy of n in new memory space.
in pass by value if change the value of n in printnumber 
function then no any affect in main function of n*/