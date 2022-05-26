#include<bits/stdc++.h>
using namespace std;
int lastpoistion(int arr[] ,int n, int key)
{
    sort(arr,arr+n);
    int start=0;
    int end=n-1;
    int ans=-1;//if key is not present then return -1.
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
    cout <<"what's the number , for searching first poistion  = ";
    cin >> key;
    int ans=lastpoistion(arr , n ,key);
    cout << "The last index of " << key <<" is = " << ans;
}