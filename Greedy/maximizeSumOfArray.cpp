#include<bits/stdc++.h>
using namespace std;
int Maximize(int arr[],int n)
{
    long long  int ans=0,sum=0,mod=1000000007;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        ans=(arr[i]%mod * i %mod)%mod;
        sum=(sum %mod +ans %mod)%mod;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   long long int ans=Maximize(arr,n);
    cout << ans <<endl;
    return 0;
}