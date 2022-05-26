#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int n,int k)
{
    if(n == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    else{
        return search(arr+1,n-1,k);
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
    bool ans=search(arr,n,k);
    if(ans){
        cout <<"True"<<endl;
    }
    else{
        cout <<"False"<<endl;
    }

    return 0;
}