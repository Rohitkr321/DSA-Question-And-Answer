#include<bits/stdc++.h>
using namespace std;
int firstpoistion(vector<int>&arr ,int n, int key)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start <= end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid] >key)
        {
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        
        mid=start+(end-start)/2;;
    }
    return ans;
}
int lastpoistion(vector<int> &arr ,int n, int key)
{
    
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start <= end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid] >key)
        {
            end=end-1;
        }
        else if(arr[mid]<key)
        {
            start=start+1;
        }
        
        mid=start+(end-start)/2;;
    }
    return ans;
}
pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
	// Write your code here. 
    pair<int ,int> p;
    p.first = firstpoistion(arr, n, x);
    p.second =  lastpoistion(arr , n , x);
    return p;
}

