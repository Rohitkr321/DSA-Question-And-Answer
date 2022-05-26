#include<bits/stdc++.h>
using namespace std;
int reversedigit(int n)
{
    int reminder=0;
    int x=0;
    int ans=0;
    while(n!=0)
    {
        reminder=n%10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10)
        {
            return 0;
        }
        ans=ans*10+reminder;
        n=n/10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int ans=reversedigit(n);
    cout<<ans;

}