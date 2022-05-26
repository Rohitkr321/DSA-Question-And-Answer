#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int number,sum,answer;
        cin>>number;
        int a=0;
        int b=1;
        if(number==1)
        {
            cout<<1;
            continue;
        }
        if(number==2)
        {
            cout<<2;
            continue;
        }
        cout << a <<" " << b << " " ;
        for(int i=1;i<=number;i++)
        {
            int sum=a+b;
            cout<<sum<<" ";
            a=b;
            b=sum;
            answer=+sum;
        }
        cout<<endl;
        cout<<answer;
    }
}