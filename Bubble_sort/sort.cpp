#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<" ";
    }
}
void bubbleSort(int arr[], int n)
{   
    // Write your code here.
    for(int i=1;i<n;i++){ //Best case :-sorted Array. Time complexity:-o(n).
        bool swaped=false;//Worst case:-unsorted Array. Time complexity :-o(n^2).
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if(swaped==false)
            break;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    cout <<endl;
    printArray(arr,n);
}