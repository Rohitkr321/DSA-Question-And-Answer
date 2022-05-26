#include<bits/stdc++.h>
using namespace std;
//How many number of way to go to nth stairs from 0 stairs.
int countDistinctWayToClimbStair(long long nStairs)
{
    //  Write your code here.
    if(nStairs<0)
        return 0;
    if(nStairs==0)
        return 1;
    return countDistinctWayToClimbStair(nStairs-1)
        	+countDistinctWayToClimbStair(nStairs-2);
}
int main()
{
    int n;
    cin>>n;
    long long ans= countDistinctWayToClimbStair(n);
    cout << ans <<endl;
    return 0;
}