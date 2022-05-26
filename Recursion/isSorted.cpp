#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[] ,int n)
{
    if(n==0 || n==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    else{
       bool remainingPart=isSorted(arr+1,n-1);
       return remainingPart; 
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
    bool ans=isSorted(arr,n);
    if(ans==1){
        cout <<"True"<<endl;
    }
    if(ans==0){
        cout <<"False"<<endl;
    }
    return 0;
}