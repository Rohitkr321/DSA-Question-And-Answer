#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(5);
    l.push_front(2);
    l.push_front(1);
    l.push_back(6);
    l.push_front(0);
    cout <<"Acces the element from list"<<endl;
    for(int i:l){
        cout <<i<<" ";
    }
    cout <<endl;
    cout <<"After Erase"<<endl;
    l.erase(l.begin());
     for(int i:l){
        cout <<i<<" ";
    }
    cout <<endl;
    l.pop_back();
    cout <<"After pop"<<endl;
     for(int i:l){
        cout <<i<<" ";
    }
    cout <<endl;
    cout <<"Size of list "<<l.size()<<endl;
    //copy all element from 1 list to other list.
    cout <<"After copy "<<endl;
    list<int>secondList(l);
     for(int i:secondList){
        cout <<i<<" ";
    }
    cout <<endl;
    // Here all the element intelize with 10 digit and size 5.
    cout <<"size 5 and all element 100"<<endl;
    list<int>thirdlist(5,10);
    for(int i:thirdlist){
        cout <<i<<" ";
    }
}