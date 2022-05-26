#include<bits/stdc++.h>
using namespace std;
vector<int> duplicate(int *arr ,int size)
{
 // find the duplicate element in this Array.
// Try to solve this question without using sort function and Time complexity :- o(n).
    vector<int>ans;
    sort(arr , arr + size);
    for(int i=0; i<size-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            ans.push_back(arr[i]);
        }
    }
    
  return ans;
}
int main()
{
    int n;
    cout <<"Enter the size of the array = ";
    cin >> n;
    int arr[n];
    cout <<"Enter the element of the array " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    vector<int>ans;
    ans=duplicate(arr , n);
    for(int i:ans){
        cout << i<<" ";
    }
   /*
   * I can use both method for array access.

        for(int i=0;i<n;i++){
            cout <<ans[i]<<" ";
        }
   */
}