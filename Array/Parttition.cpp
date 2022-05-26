#include<bits/stdc++.h>
using namespace std;
void printArray(int *arr,int n){
 for(int i=0;i<n;i++){
       cout <<arr[i]<<" ";
   }
}
void partition(int *arr, int n, int point){
    int i=0;
    for(int j=n-1;j>=i;j--){
        if(arr[i]>point && arr[j]<=point){
            swap(arr[i],arr[j]);
            i++;
        }
    }
   
}
int main()
{
    int n,point;
    cin>>n;
    cin>>point;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   partition(arr,n,point);
   printArray(arr,n);
    return 0;
}