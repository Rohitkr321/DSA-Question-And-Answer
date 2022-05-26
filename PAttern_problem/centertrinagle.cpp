#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j=j+1;
        }
        int count=i-1;
        while (count)
        {
            cout<<count;
            count--;
        }
        
        cout<<endl;
        i=i+1; 
    }
}