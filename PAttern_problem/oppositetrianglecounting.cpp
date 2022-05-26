#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin>>number;
    int row=1;
    while(row<=number)
    {
        int space=number-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int column=1;
        while(column<=row)
        {
            cout<<column;
            column++;
        }
        
        cout<<endl;
        row++;
    }
}