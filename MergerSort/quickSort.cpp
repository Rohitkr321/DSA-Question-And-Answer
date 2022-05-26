#include<bits/stdc++.h>
using namespace std;
int index(int *arr, int s,int e)
{
    int pivot=arr[s];
    int count=0;
    //For shift the right place of pivot i count the number of samlll element in case of pivot.
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
            count++;
    }
    //Right poistion to pivot element.
    int pivotIndex= s+ count;
    swap(arr[pivotIndex],arr[s]);

    int i=0,j=e;
    while(i<pivotIndex && j>pivotIndex)
    {
        //from pivot element all element small to pivot.
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
return pivotIndex;

}
void quickSort(int *arr, int s , int e)
{
    if(s>=e)
        return ;
        
    int p=index(arr,s,e) ;

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);   
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}