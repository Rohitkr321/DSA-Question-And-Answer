 #include<iostream>
 #include<deque>
 using namespace std;
/*
In deque Array we can push the element from start and end both as well as pop from start and end both .
*/
 int main()
 {
     deque<int>d;
    d.push_back(10);
    d.push_back(15);
    d.push_back(5);
    d.push_front(1);
    d.push_front(0);
    cout <<"After push the element from front and back both "<<endl;
    for(int i:d){
        cout <<i<<" ";//Access the element.
    }
    cout <<endl;
    d.pop_back();
    d.pop_front();
     for(int i:d){
        cout <<i<<" ";//Access the element.
    }
    cout <<endl;
    //Acces the element from any index,where u want
    cout <<"Element at index 1st  "<<d.at(1)<<endl;
    cout <<"Element from front  "<<d.front()<<endl;
    cout <<"Element from end  "<<d.back()<<endl;
    cout <<"size of deque is "<<d.size()<<endl;
    cout <<"maximum size of deque is "<<d.max_size()<<endl;
   // cout <<"size of deque is "<<d.empty()<<endl;
    //delete the element from which index.
    cout <<"After erase"<<endl;
    d.erase(d.begin(),d.begin()+2);// delete the element 1 and 2nd.
    for(int i:d){
        cout <<i<<" ";//Access the element.
    }
 }