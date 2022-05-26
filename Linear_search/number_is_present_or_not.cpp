#include<bits/stdc++.h>
using namespace std;
int ispresent(int arr[], int size, int n)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == n)    //true means 1
        {                  //false means 0
            return true;  // return 1;
        }
    }
    return false; // return 0;
}
int main()
{
    int n,number;
    cout <<"Enter  the size of the array = ";
    cin >> n;
    int arr[100];
    cout <<"enter the element of the array " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout <<"Which number you want to search in the array = ";
    cin >> number;
    bool ans= ispresent(arr, n ,number);
    if(ans == 1)
    {
       cout <<"The given Number is  present in this array "<< endl;
    }
    else
    {
        cout <<"The given Number is  not present in this array "<< endl;
    }
}