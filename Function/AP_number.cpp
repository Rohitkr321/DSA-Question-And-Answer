#include<bits/stdc++.h>
using namespace std;
int apnumber(int n)
{
    int ap=(3*n)+7;
    return ap;
}
int main()
{
    int num;
    cout << "Enter a number = " ;
    cin >> num;
    int ans= apnumber(num);
    cout << ans << endl;

}