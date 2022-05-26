#include<bits/stdc++.h>
using namespace std;
void reverse(char name[],int n)
{   
    int start=0;
    int end=n-1;
   while(start<=end){
        int temp=name[start];
        name[start]=name[end];
        name[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int n;
    cin>>n;
    char name[n];
    cin>>name;
    reverse(name,n);
    for(int i=0;i<n;i++){
        cout <<name[i]<<" ";
    }
    return 0;
}