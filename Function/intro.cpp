#include<bits/stdc++.h>
using namespace std;

int power()
{
    int a,b,ans=1;
    cout << "Enter the value = " ;
    cin >> a ;
    cout << "Enter the value = " ;
    cin >> b ;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int ans=power();
    cout << "The Power of given number is = " << ans;
}