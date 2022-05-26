#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) 
{
 //& operator only return odd value therefor power of 2 is never be odd.  
    for(int i=0;i<=n;i++)
    {
        if(n & 1)  //if(n==pow(2,i))   also true
        {
            return true; // it means not power of two.
        }
    }
     return false;
}
int main()
{
    int n;
    cin>>n;
    /*
    & operator only return odd value therefor power of two is never be odd. 
    for (int i = 0; i < 10 ; i++)
    {
        if (i & 1)
        {
            cout << i << endl;
        }
    }
    */
    cout << endl;
    bool ans=isPowerOfTwo(n);
    cout<<ans;
}