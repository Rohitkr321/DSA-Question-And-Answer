#include <bits/stdc++.h>
using namespace std;
int moreElement(int arr[], int n)
{
  int count = 1;
  int ans = -1;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
      if (count > n / 2)
      {
        ans = +arr[j];
      }
    }
    count = 1;
  }
  return ans;
}
int main()
{
  int n;
  cin >> n;
  int arr[100];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int ans = moreElement(arr, n);
  cout << ans;
}