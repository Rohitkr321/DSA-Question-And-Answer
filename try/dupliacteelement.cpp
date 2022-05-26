#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,d,q;
   cin>>n;
   cin>>d;
   int temp[n];
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cin>>q;
   int queries[q];
   for(int i=0;i<q;i++)
   {
       cin>>queries[i];
   }
   for(int i=0;i<n;i++)
   {
       temp[(i+(n-d))%n]=arr[i];
      
   } 
   for(int i=0;i<n;i++)
   {
       cout << temp[i]<<" ";
   }
   cout << endl;
   for(int i=0;i<q;i++)
   {
       
            int ans=+queries[i];
            queries[i]=temp[ans];
            cout <<queries[i] << " ";
   }
}