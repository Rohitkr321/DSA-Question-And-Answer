#include<bits/stdc++.h>
using namespace std;
/*
 Tail Recursion.
1. Base Case.(mandatory)
2. Processing.
3. Recursive relation.(mandatory)
*/
void countPrint(int n)
{
    if(n==0)//Base case.
        return ;

    cout << n <<endl;
    countPrint(n-1);//Recursive Relation.
}
int main()
{
    int n;
    cin>>n;
    countPrint(n);
    return 0;
}