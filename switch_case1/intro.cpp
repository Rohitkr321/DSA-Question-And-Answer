#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=5;
    char ch='a';
    int b=5;
    
        // we use also 2*num for pass in switch case if num==1.
        switch(num)
        {
            case 5: cout<<"It's a number "<<endl;
            // we use the exit for exit from case and it's also work for loop 
                    exit(5);
                   cout<<"It's a number "<<endl;
            // we use the break for exit from case
                break;

            case 'a': cout<<"It's a character" <<endl;
               break;

            default: cout<< " it's a default case" <<endl;         
       
        }
    
}