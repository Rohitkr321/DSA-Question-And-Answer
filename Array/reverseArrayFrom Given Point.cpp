#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[] ,int n, int m)
{
	// Write your code here.
    
   int start=m;
    int end=n-1;
    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
   cout << arr[i] <<" ";
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
    int m;
    cin>>m;
    reverseArray(arr, n ,m);
    return 0;
}