#include<bits/stdc++.h>
using namespace std;
class house{
    public:
    int length = 0, breadth = 0;
    void setData(int x, int y){
        length = x;
        breadth = y;
    } 
    void area(){
        cout <<"The area of house is "<<length*breadth<<endl;
    }
};
class houseInEngland 
:public house {
    public:
    void sumOfArea(){
        cout<<"Sum of Area "<<length+breadth<<endl;
    }
};
int main()
{
    houseInEngland smoe;
    smoe.setData(500, 600);
    smoe.sumOfArea();
    smoe.area();
    return 0;
}