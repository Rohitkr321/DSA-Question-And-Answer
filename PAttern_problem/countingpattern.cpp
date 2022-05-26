#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin>>number;
    int row=1;
    int count=1;
    while(row<=number)
    {
        int column=1;
        while(column<=number)
        {
            cout<<count<<" ";
            count++;
            column++;
        }
        cout<<endl;
        row++;
    }
}
