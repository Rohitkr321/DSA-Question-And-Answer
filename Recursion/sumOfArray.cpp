#include<bits/stdc++.h>
using namespace std;
int sumArray(int arr[] , int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return arr[0];  
    else{    
        int ans=sumArray(arr+1,n-1);
        int sum=arr[0]+ans;
        return sum;
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
    int ans=sumArray(arr,n);
    cout <<ans<<endl;
    return 0;
}