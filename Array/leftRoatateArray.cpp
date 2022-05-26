#include<bits/stdc++.h>
using namespace std;
//left rotate array clockwize.
void printArray(int arr[],int n,int k)
{
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
}
void leftRotate(int arr[],int n,int k)
{
    int temp[n];//Extra space.
    for(int i=n-1;i>=0;i--){
        temp[(i+(n-k))%n]=+arr[i];
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
    leftRotate(arr,n,k);
    return 0;
}