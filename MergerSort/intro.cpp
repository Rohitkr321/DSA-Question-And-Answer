#include<bits/stdc++.h>
using namespace std;
void merge(int *arr, int s,int e)
{
    int mid= s+(e-s)/2;
    
    int l1=mid-s+1;
    int l2=e-mid;

    int *first=new int[l1];
    int *second=new int[l2];

    int mainArrayIndex=s;
    for(int i=0;i<l1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
    for(int i=0;i<l2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    //merge Sorted Array
    int index1=0;
    int index2=0;
    mainArrayIndex=s;

    while(index1 < l1 && index2 < l2 ){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
             arr[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1 < l1 ){
         arr[mainArrayIndex++]=first[index1++];
    }
    while(index2 <l2){
         arr[mainArrayIndex++]=second[index2++];
    }

}
void mergeSort(int *arr,int s,int e)
{
    if(s>=e)
        return ;
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}