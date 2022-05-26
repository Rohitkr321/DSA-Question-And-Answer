#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
}
void reverse(int arr[], int n)
{
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
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
    reverse(arr,size);
    printarray(arr,size);
}
