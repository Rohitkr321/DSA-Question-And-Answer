#include<bits/stdc++.h>
using namespace std;
/*
Move all negative numbers to beginning and positive to end with constant extra space.
*/
void printArray(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
}
void seprateNegativeNumber(int  arr[],int n)
{
     int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <  0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    seprateNegativeNumber(arr,n);
    printArray(arr,n);
    return 0;
}