#include<bits/stdc++.h>
using namespace std;

// In array when i call the function like this printarray(arr , size) then function get the 1st base 
//address of array not array value because (arr) store the 1st index of array then  if we update in array
//then array index then it can update in also main function .
void update(int arr[] , int size)
{
    arr[1]=120; // Here we update the array value.
    cout <<"This array is in update function" << endl;
    for(int i=0 ; i<size ; i++)
    {
        cout << arr[i] <<" ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array =  ";
    cin >> n;
    //constraints n<=100
    int arr[100]={1, 2 ,5 , 8 ,9 ,7};
    // In array value no any change Before calling the update function .
    cout << "This array is in main function before calling the update function " << endl;
     for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    update(arr , n);
    cout << endl;
    //The array value cahnge after calling the update function .
    cout << "This array is in main function after calling the update function " << endl;
     for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}

/*
output

This array is in main function before calling the update function 
1 2 5 8 9
This array is in update function
1 120 5 8 9
This array is in main function after calling the update function
1 120 5 8 9

*/