#include<bits/stdc++.h>
using namespace std;
int duplicate(int arr[] ,int size)
{
 // find the duplicate element in this question only 1 duplicate present in this question

    int ans=0,temp=0;
    sort(arr , arr + size);
    for(int i=0; i<size-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            ans=+arr[i];
        }
    }

    return ans;
}
int main()
{
    int n;
    cout <<"Enter the size of the array = ";
    cin >> n;
    int arr[n];
    cout <<"Enter the element of the array " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int ans=duplicate(arr , n);
    cout <<"The duplicate elment is = "<< ans << endl;
}