#include<bits/stdc++.h>
using namespace std;
void sayDigit(string arr[], int n)
{
    if(n == 0)
        return ;
    int digit=n%10;
        n=n/10;
    sayDigit(arr,n);
    cout <<arr[digit]<<" ";        
}
int main()
{
    string arr[10]={"Zero","One","Two","Three","Four","Five",
                    "Six","Seven","Eight","Nine"};
    int n;
    cin>>n;
    sayDigit(arr,n);
    return 0;
}