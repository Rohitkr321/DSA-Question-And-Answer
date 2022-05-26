#include<iostream>
using namespace std;
/*
 this problem solve by easy method by using 'sort' function.
*/
void kthsmallest(int arr[],int n,int k)
{
    for(int i=0;i<n;i++){
        if(i==k-1)
        {
            cout <<arr[i];
        }
    }
}
/*
Liner Sorting Applied here.
Time complexity:-o(n^2).
Space complexity:-o(n).
*/
void sort(int arr[],int n)
{
    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
         swap(arr[minIndex],arr[i]);
         cout <<arr[i]<<" ";
    }
}
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    sort(arr,n);
    cout <<endl;
    kthsmallest(arr,n,k);
}