#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=5;
    char ch='a';

    switch(a)
    {
        case 5: cout<<"It's a number "<<endl; 
        switch(a)
       
        {
            case 5: cout<<"value of a is "<<a<<endl;
            break;
        }
            break;

        case 'a': switch(ch)
        {
            case 'a': cout<<"value of chracter is "<<ch<<endl;
            break;
        }
            break;

        default: cout<< " it's a default case" <<endl;         
    }
}