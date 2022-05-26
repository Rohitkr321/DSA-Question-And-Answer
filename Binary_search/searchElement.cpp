#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n,int x)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
   while(start<=end)
   {
        if(x==arr[mid])
            return mid;

        else if(x>arr[mid]){
            start=mid+1;
            
        }
        else if(x<arr[mid]){
            end=mid-1;
          
        }
       
        mid=start+(end-start)/2;
    }
    return ans;
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
    int x;
    cin>>x;
   int ans= search(arr,n,x);
   cout << ans <<endl;
    return 0;
}