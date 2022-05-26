#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n,int x)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
}
void partitionArray(int arr[], int n, int x)
{
    
    int j=0;
    int resu[n];
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=x)
        {
            resu[j++]=arr[i];
        }
       // cout << resu[i] <<" ";
    }
     for(int i=0; i<n; i++)
    {
        if(arr[i]>x)
        {
            resu[j++]=arr[i];
        }
        cout << resu[i] <<" ";
    }/*
int j=0;
for(int i=0;i<n;i++)
{
if(arr[i]<=x)
{
    swap(arr[j],arr[i]);
    j++;
}
}
*/


}
int main()
{
     int n,x;
    cout <<"Enter the size of the array = ";
    cin >> n;
    int arr[n];
    cout <<"Seprtaed from regarding which elemnet = ";
    cin >> x;
    cout <<"Enter the element of the array " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    partitionArray(arr , n , x);
    printarray(arr, n, x);
}
