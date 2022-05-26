#include<bits/stdc++.h>
using namespace std;
// Return the array that contains leader elements
vector<int> findTheLeaders(vector<int> arr) {
  // Write your code here
  int l=arr[arr.size()-1];
  vector<int>leader;
  leader.push_back(l);
  for(int i=arr.size()-2;i>=0;i--){
    if(arr[i]>l)
    {
      l=arr[i];
      leader.push_back(l);
    }
  }
  return leader;
}  