#include<bits/stdc++.h>
using namespace std;

void subtract(int n)
{
    int prod=1;
    int sum=0;
    while(n!=0)
    {
        int digit=n%10;
        prod=prod*digit;
        sum=sum+digit;
        n=n/10;
    }
    int answer=prod-sum;
    cout<<answer;
}
int main()
{
    int n,answer;
    cin>>n;
    subtract(n);
   
}