#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[], int n)
{
    //smallest number
    int s=0 ,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
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
        int ans=pivot(arr , n);
        cout << ans;
}