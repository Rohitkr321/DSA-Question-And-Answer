//Rorate Array from right side means anti clockwize.
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n,int k)
{
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
}
//Rotate the array with extra space (temp array).
void rotateArray(int arr[],int n,int k)
{
    int temp[n];//Extra space.
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]=+arr[i];
    }
    arr=+temp;
    printArray(arr,n,k);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    rotateArray(arr,n,k);
    return 0;
} 