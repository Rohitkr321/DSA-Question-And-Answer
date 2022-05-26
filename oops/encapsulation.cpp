/********************************************************************************
 * Encapsulation
 => wrapping a variable and function or methods together in a class.
 * it used to hidden the data from outside world.
 * ***/


#include<bits/stdc++.h>
using namespace std;

class encapsulation{
    //dtaa hidden from outside world.
    private:
    int x=5;

    public:
    int setData(){
        int a = x;
        return a;
    }
};
class encapsulation2nd{
    private:
    int x;
    public:
    void setItem(int a){
        x=a;
    }
    int  getData(){
        return x;
    }
};
int main()
{
    encapsulation object1;
    int a = object1.setData();
    cout<<"Encapsulation 1st example "<<a<<endl;;

    encapsulation2nd object2;

    object2.setItem(7);

    cout<<"Encapsulation 2nd example "<<object2.getData();
    return 0;
}