#include<bits/stdc++.h>
using namespace std;
void swapalternet(int arr[], int n)
{
    for (int i=0;i<n-1;i+=2)
    {
        swap(arr[i] , arr[i+1]);
    }
}
void printarray(int arr[], int n)
{
    swapalternet(arr,n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] <<" "  ;
    }
}
int main()
{
    int size;
    cout <<"Enter the size of the array = ";
    cin >> size;
    int arr[100];
    cout <<"enter the element of the array " << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    } 
    cout <<"The alternet array are " << endl;
    printarray(arr , size);
}