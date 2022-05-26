#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int k,int s,int e)
{
    if(s>e){
        return false;
    }    
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }  
    if(arr[mid]<k){
        return search(arr,k,mid+1,e);
    }  
    else{
        return search(arr,k,s,mid-1);
    }
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
    int start=0;
    int end=n-1;
    bool ans=search(arr,k,start,end);
    if(ans){
        cout <<"True"<<endl;
    }
    else{
        cout <<"False"<<endl;
    }
    return 0;
}