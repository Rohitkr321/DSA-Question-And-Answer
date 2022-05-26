#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[] , int size, int startingPoint,int endPoint)
{
    int temp;
    int ans;
    /*
    //This logic is true but in this logic but we can't return the full array in main function if void function then it work proprely.
    // from this logic we can only reverse full array not from give position.
    for(int i=size-1; i>=0; i--)
    {
        temp=arr[i];
        ans=+temp;
        cout << ans <<" " ;
    }
    
    //This logic is true but in this logic we can't return the full array in main function if void function then it work proprely.
    for(int i=0; i<size/2; i++)
    {
        swap(arr[i], arr[size-i-1]);
    }
    for(int i=0;i<size;i++)
    {
        cout << arr[i] <<" ";
    }
    */
    
    // This logic is true but in this logic we can't return the full array in main function if void function then it work proprely.
   int start=startingPoint-1;
   int end=endPoint-1;
   for(int i=start;i<=end;i++)
   {
       swap(arr[i] , arr[end]);
       end--;
   }
   for(int i=0; i<size; i++)
   {
       cout << arr[i] <<" ";
   }
   

}
int main()
{
    int n,startingPoint,endPoint;
    cout <<"Enter  the size of the array = ";
    cin >> n;
    int arr[100];
    cout <<"enter the element of the array " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    } 
    cout <<"I reverse from which element  = ";
    cin >> startingPoint;
    cout <<"I reverse at which element  = ";
    cin >> endPoint;
    cout << "The reverse array is " << endl;
    reverse(arr , n, startingPoint,endPoint);
}