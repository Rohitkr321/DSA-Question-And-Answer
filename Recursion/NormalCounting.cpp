#include<bits/stdc++.h>
using namespace std;
/*
Head Recursion.
1. Base Case.(mandatory)
2. Recursive relation.(mandatory)
3. Processing.
*/
void countPrint(int n)
{
    if(n==0)//Base case.
        return ;

    countPrint(n-1);//Recursive Relation.
    cout << n <<endl;
}
int main()
{
    int n;
    cin>>n;
    countPrint(n);
    return 0;
}