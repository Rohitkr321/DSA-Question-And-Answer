#include<bits/stdc++.h>
using namespace std;
int getmax(int arr[] , int size)
{
    int max1= INT_MIN;
    for(int i=0; i<size; i++)     //Time complexity = o(n)
    {
        max1=max(max1 , arr[i]);
       /* Here we can also use it's not a wrong logic
            if(arr[i] > max1)
            {
                max1=arr[i];
            }
        */
    }
    return max1;
}                               
int getmin(int arr[] , int size)       //Time complexity = o(n)
{
    int mini= INT_MAX;
    for(int i=0; i<size; i++)
    {
         mini=min(mini , arr[i]);
        /* Here we can also use it's not a wrong logic.
            if(arr[i] < min)
            {
                min=+arr[i]; 
            }
        */
    }
    return mini;
}
int main()
{
    int size;
    cout << "Enter the size of the array = ";
    cin >> size;
    int arr[1000];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    int max=getmax(arr , size);
    int min=getmin(arr , size);
    cout << "The maximum value is = " << max <<endl;
    cout << "The minimum value is = " << min <<endl;
}