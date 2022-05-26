#include<bits/stdc++.h>
using namespace std;
//Brute Force 
int unionCount(int *arr1,int n,int *arr2,int m)
{
    int count=0;
    int number=n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr2[i]==arr1[j])
                count++;
        }
    }
    int sum=number-count+m;
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int *arr1=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
     int *arr2=new int[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int ans=unionCount(arr1,n,arr2,m);
    cout <<ans<<endl;
    return 0;

}
/*
Optimize solution.
 int doUnion(int a[], int n, int b[], int m)  {
      vector<int>ans;
        for(int i=0;i<n;i++)
            ans.push_back(a[i]);
        for(int i=0;i<m;i++)
            ans.push_back(b[i]);
        sort(ans.begin(), ans.end());
        int x = 0;
        for(int i=0;i<ans.size()-1;i++)
            if(ans[i]!=ans[i+1])
                x++;
        return x+1;
    }
*/