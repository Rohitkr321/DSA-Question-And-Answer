#include<bits/stdc++.h>
using namespace std;
int findunique(int arr[], int size)
{
    
    // This logic is not work if headrer file is iostream.
    sort(arr , arr+size);
    int ans=0;
    for(int i=0; i<size; i+=2)
    {
        if(arr[i]!=arr[i+1])
        {
            ans=+arr[i];
        }
        else
        {
            continue;
        }
    }
    return ans;
    /*
   // Xor operation apllied here .
   // 1^1=0
   //0^1=1
    int ans=0;
    for (int i=0;i<size ; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
   */
}
int main()
{
    int n;
    cout <<"Enter  the size of the array = ";
    cin >> n;
    int arr[100];
    cout <<"enter the element of the array " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    } 
    int ans=findunique(arr , n);
    cout <<ans;
}   