#include<bits/stdc++.h>
using namespace std;
void median(int temp[],int size)
{
    int mid= 0+((size-1)-0)/2;
    if(size%2==0){
        int average=(temp[mid]+temp[mid+1])/2;
        cout << "Average "<<average<<endl;
    }
    else 
    cout << "mid"<<mid;
    
}
//Here merge the sorted array.
void merge(int arr1[],int arr2[],int n)//Time complexity:-O(nlogn).   
{
    int size=2*n;
   int temp[size];
    for(int i=0;i<n;i++)
    {
      temp[i]=arr1[i];
    }
    for(int j=0,i=n;j<n;j++,i++)//Space complexity:-O(n);
    {
        temp[i]=arr2[j];
    }
    //Here print the merge sorted array.
  for(int i=0;i<size;i++){
      sort(temp,temp+size);
      cout <<temp[i]<<" ";
  }
  cout <<endl;
  median(temp,size);
}
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
     for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    merge(arr1,arr2,n);
    return 0;
}  
//Function for optimal approch.
/*
int average(int arr1[],int arr2[],int n)  Time complexity:-O(n).
                                          Space complexity:-O(1).
{
    int count;
    int m1=-1,m2=-1;
    int i=0,j=0;
    for(count=0;count<=n;count++){
        if(i==n){
            m1=m2;
            m2=arr2[0];
            break;
        }
        if(j==n){
            m1=m2;
            m2=arr1[0];
            break;
        }
        if(arr1[i]<arr2[j]){
            m1=m2;
            m2=arr1[i];
            i++;
        }
         else{
            m1=m2;
            m2=arr1[j];
            j++;
        }
    }
    return (m1 + m2)/2;
}
*/