#include<bits/stdc++.h>
using namespace std;
int power(int x,int y)
{
    int m=1000000007;
    int result=1;
    while(y!=0)
    {
        if(y&1){
            result=(1LL *(result)*(x)%m)%m;
        }
        x=(1LL * (x)%m *(x)%m)%m;
        y=y>>1;
    }
    return result;
}
int main()
{
    int x,y;
    cin>>x>>y;
    int ans=power(x,y);
    cout <<ans<<endl;
    return 0;
}