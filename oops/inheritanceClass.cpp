/**********************************************************
 * Whta is inheritance class.
 => A class have capability to derive properties and chractrstics of another class is called inheritance class.

 * Sub Class: 
    => The class that inherits properties from another class is called Sub class or Derived Class. 
 */
#include<bits/stdc++.h>
using namespace std;

class parent{
    public:
    int p_id;
};
// Sub class inheriting from Base Class(Parent)
class child : public parent{
    public:
    int c_id;
};
int main()
{
    child rohan;

    rohan.c_id=7;
    rohan.p_id=5;
    cout << "Child id is: " <<  rohan.c_id << '\n';
    cout << "Parent id is: " <<  rohan.p_id  << '\n';
    return 0;
}

 