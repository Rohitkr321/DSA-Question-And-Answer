#include<bits/stdc++.h>
using namespace std;

int power(int a , int b)
{
    //logic
    int power=1;
    for(int i=1;i<=b;i++)
    {
        power=power*a;
    }
    /*
    "using pow function"
                        int ans;
                        int power(int a , int b)
                        {
                            ans=pow(a,b);
                        }
                            return ans; 

       "Then we get power of two number." 
    */
    return power;
}
int main()
{
    int a,b,t;
    cout <<"How many Test case = ";
    cin>>t;
    while(t--)
    {
        cout << endl;
        cout << "Enter 1st number" <<endl;
        cin >>a;
        cout << "Enter 2nd number" <<endl;
        cin >>b;
        int ans=power(a,b);
        cout <<"power of 1st and number is = " << ans <<endl;  
    }
}