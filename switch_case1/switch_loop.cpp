#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=5;
    char ch='a';
    int b=5;
    
    while(b!=0)
    {
        switch(ch)
        {
            case 5: cout<<"It's a number "<<endl;
                exit(5);

            case 'a': cout<<"It's a character" <<endl;
            //We use the 'exit' for exit from loop and aslo infinite loop.
               exit('a');

            default: cout<< " it's a default case" <<endl;         
        }
        b++;
    }
    
}