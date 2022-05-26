#include<bits/stdc++.h>
using namespace std;
// This progrm search an lement is present in given array by the help of Biary search.
//Binary search is apllicable on monotonic function.
//monotonic function means ,seeries are mabbe incressing as welll as decressing. 
// In binary search T.C O(logn).
int binarysearch(int arr[] , int n, int key)
{
    sort(arr,arr+n);
    int start=0;
    int end=n-1;
    int mid= start+(end-start)/2;
    while(start <= end)    
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            end= mid-1;
        }
        else if(arr[mid] < key)
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int n,key;
    cout <<"Enter  the size of the array = ";
    cin >> n;
    int arr[100];
    cout <<"enter the element of the array " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    } 
    cout <<"Which number you want to search in this array = ";
    cin >> key;
    int ans=binarysearch(arr , n , key);
    cout << "The key element is present in this array at index = " << ans << endl;
}