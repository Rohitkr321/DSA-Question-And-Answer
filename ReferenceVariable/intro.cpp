#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=5;
    int &j =i;//Refrence variable.
    cout <<i<<endl;
    cout <<j<<endl;
    i++;
    cout <<i<<endl;
    j++;
    cout <<i<<endl;
    cout <<"All are clear "<<endl;
    return 0;
    /*
        * Refrence variable are used in function is called Pass By refrence.  
        * Rference variable means same memory difrent name.
    */
}