#include <bits/stdc++.h>
using namespace std;
int moreElement(int arr[], int n)
{
  int count = 1;
  int ans = -1;
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == arr[j+1])
    { 
      count++;
      j++;
    }
    else if (count > n / 2)
    {
      ans = +arr[j];
    }
    else if (arr[i] != arr[j+1])
    { 
      j++;
    }
  }

  return ans;
}
int main()
{
  int n;
  cin >> n;
  int arr[n]; 
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int ans = moreElement(arr, n);
  cout << ans;
}