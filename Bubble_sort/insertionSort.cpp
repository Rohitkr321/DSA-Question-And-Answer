#include<bits/stdc++.h>
using namespace std;
//insertion sort.
int sort(int arr[],int n)
{                         
    for(int i=1;i<n;i++)
    {
       int temp=arr[i];
       int j=i-1;
       for(;j>=0;j--)
       {
           if(arr[j]>temp){
               arr[j+1]=arr[j];//shift.
           }
           else
            break;
       }
       arr[j+1]=temp; 
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
    sort(arr,n);
}