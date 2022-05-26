#include<bits/stdc++.h>
using namespace std;
void sort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int minIndex=i; // we assuming it's a minimum vlaue in this array.
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
        cout << arr[i]<< " ";
    }

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
    sort(arr,size);
}