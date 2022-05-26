#include <bits/stdc++.h>
using namespace std;
int first(int arr[], int n, int key)
{
    sort(arr, arr + n);
    int start = 0;
    int end = n - 1;
    int ans = 0; 
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = end - 1;
        }
        else if (arr[mid] < key)
        {
            start = start + 1;
        }
        mid = start + (end - start) / 2;
        
    }
    return ans;
}
    int last(int arr[], int n, int key)
    {
    sort(arr,arr+n);
    int start=0;
    int end=n-1;
    int ans=0;
    int count=0;
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
        int n, key;
        cout << "Enter  the size of the array = ";
        cin >> n;
        int arr[100];
        cout << "enter the element of the array " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "what's the number , for count  = ";
        cin >> key;
        int ans = first(arr, n, key);
        cout << ans << endl;
        int result = last(arr, n, key);
        cout << result << endl;
        cout << "Total key count presnt in array of  " << key << " is " << (result - ans)+1;
    }