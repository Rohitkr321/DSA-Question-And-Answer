#include<iostream>
#include<vector>
using namespace std;
int main()
{                   //capacity means how many memory allocate to a vector.
    vector<int>vec;// vector intial capacity 0.
    cout <<"The capicity of vector, if no element insert is "<<vec.capacity()<<endl;
    vec.push_back(5);
    cout <<"The capicity of vector after 1st element insert is "<<vec.capacity()<<endl;
    cout <<"size of the vector array is "<<vec.size()<<endl;
    vec.push_back(55);
    cout <<"size of the vector array is "<<vec.size()<<endl;
    cout <<"The capicity of vector after 2nd element insert is "<<vec.capacity()<<endl;
    vec.push_back(10);
    cout <<"size of the vector array is "<<vec.size()<<endl;
    cout <<"The capicity of vector after 3rd element insert is "<<vec.capacity()<<endl;
    //capacity increase in multiple of n times.
    //capacity increase,means size increase.
    //if size==2,then we try to insert the element 3 then capacity increase multiple of n times, capacity==4.  
    cout <<"Element at index 2nd is "<<vec.at(1)<<endl;
    cout <<"1st element "<<vec.front()<<endl;
    cout <<"last element "<<vec.back()<<endl;
    cout <<"the capacity before pop is "<<vec.capacity()<<endl;
    cout <<"the size before pop is "<<vec.size()<<endl;
    cout <<"before pop the total array is "<<endl;
    for(int i:vec){
        cout <<i<<" ";
    }
    cout <<endl;
    vec.pop_back();
    cout <<"the capacity before pop is "<<vec.capacity()<<endl;
    cout <<"the size before pop is "<<vec.size()<<endl;
     cout <<"After pop the total array is "<<endl;
    for(int i:vec){
        cout <<i<<" ";
    }cout << endl;
    // when i pop or clear the element then capacity not be change .
    cout <<"the capacity before clear is "<<vec.capacity()<<endl;
    cout <<"the size before clear is "<<vec.size()<<endl;
    vec.clear();
    cout <<"the capacity after clear is "<<vec.capacity()<<endl;
    cout <<"the size after clear is "<<vec.size()<<endl;
    int key=55;
    vector<int >arr(6,2);
    for(int i:arr){
        cout <<i <<" ";//Access the vector array.
    }cout <<endl;
   //copy the total element from vector arr.
    vector<int>another(arr);
    for(int i:another){
        cout <<i <<" ";//Access the vector array.
    }
}
