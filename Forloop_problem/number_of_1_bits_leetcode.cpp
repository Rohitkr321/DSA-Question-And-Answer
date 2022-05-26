#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,answer=0;
    cin>>n;
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
            count++;
            answer=answer+count;
        }
        n=n>>1;
    }
    cout<<answer;
}