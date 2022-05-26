#include<bits/stdc++.h>
using namespace std;
int maximizeSum(int arr[],int n)
{
    sort(arr,arr+n);
    vector<int>temp;
    for(int i=0;i<n/2;i++){
        temp.push_back(arr[i]);
        temp.push_back(arr[n-i-1]);
    }
      if (n % 2 != 0){
        temp.push_back(arr[n/2]);   
    }
    int maxSumDiffernce=0;
    for(int i=0;i<n-1;i++){
        maxSumDiffernce=maxSumDiffernce+ abs(temp[i]-temp[i+1]);
    }
    maxSumDiffernce=maxSumDiffernce+ abs(temp[n-1]-temp[0]);
   
    return maxSumDiffernce;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=maximizeSum(arr,n);
    cout << ans<<endl;
    return 0;
}