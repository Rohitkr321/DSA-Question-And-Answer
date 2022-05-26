#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<"right shift and left shift by 1 "<<endl;
        cout<<"Left shift"<<"  "<<(arr[i]<<1)<<" "<<endl;;
        cout<<"right shift"<<"  "<<(arr[i]>>1)<<" "<<endl;
        cout<<"right shift and left shift by 2"<<endl;
        cout<<"Left shift"<<"  "<<(arr[i]<<2)<<" "<<endl;;
        cout<<"right shift"<<"  "<<(arr[i]>>2)<<" "<<endl;
    }
}