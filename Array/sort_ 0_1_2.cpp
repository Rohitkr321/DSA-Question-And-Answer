#include<bits/stdc++.h>
using namespace std;
void sort012(int a[],int n)
{
   int j=0, start=0, end=n-1;
       while(start<=end){
           if(a[start]==0) swap(a[start++],a[j++]);
           else if(a[start]==1) start++;
           else swap(a[start],a[end--]);
       }
       for(int i=0;i<n;i++)
       {
           cout <<a[i] <<" ";
       }
}
int main()
{
    int size;
    cout << "Enter the size of the array = ";
    cin >> size;
    //int arr[size]; it's Bad way to store the array size.
    int arr[100];
    cout <<"Enter the array value " << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
   
    sort012(arr,size);
}
