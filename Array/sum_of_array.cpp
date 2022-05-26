#include<bits/stdc++.h>
using namespace std;

int arraysum(int arr[], int n)
{
    int sum=0;
    int maximum=INT_MIN;
    for(int i=0; i<n; i++)
    {
        maximum=max(arr[i],maximum); //Here we find the maximum value in array
        sum+=arr[i];
    }
    cout <<"The maximum value in this array is =" << maximum;
    return sum;
}
int main()
{
    int size;
    cout << "Enter the size of the array = ";
    cin >> size;
    int arr[size];
    cout << "Enter the element of the array"<< endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    int sum = arraysum(arr , size);
    cout << endl;
    cout << "Sum of the element of the array is = " << sum << endl;
}