#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[] , int num )
{
    cout << "it's your array of size " << num << endl; ; 
    for(int i=0; i<num; i++)
    {
      cout << arr[i] << " ";
    }
     
}

int main()
{
    int size;
    cout << "Enter the size of the array = ";
    cin >> size;
    //int arr[size]; it's Bad way to store the array size.
    int arr[100];
    cout <<"Enter the array value " << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    int arrsize = sizeof(arr)/sizeof(int); //aray size.
    cout << "The size of the array is " << arrsize <<endl;
    // In array when i call the function like this printarray(arr , size) then function get the 1st base 
    //address of array not array value because (arr) store the 1st index of array.
    printarray(arr , size);
}