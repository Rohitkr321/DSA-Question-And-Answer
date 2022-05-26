#include<bits/stdc++.h>
using namespace std;
int btod(int a)
{
    int ans=0,count=0;
    int i=0;
    while(a!=0)
    {
        int bit=a & 1;
        ans=(bit*pow(10,i))+ans;
        if(bit == 1)
        {
            count++;
            
        }
        a=a>>1;
        i++;
    }
    
    return count;
}
int btodforb(int b)
{
    int ans=0,count=0;
    int i=0;
    while(b!=0)
    {
        int bit=b & 1;
        ans=(bit*pow(10,i))+ans;
        if(bit == 1)
        {
            count++;
        }
        b=b>>1;
        i++;
    }
    return count;
}
int countsetbits(int a, int b)
{
    //Here we call btod() function for get the value of setbits.
   int ans= btod(a);
   //Here we call btodforb() function for get the value of setbits.
   int result= btodforb(b);
   int setbits= ans + result;
   return setbits;
}
int main()
{
    int a, b;
    cout << "Enter the value of 1st number = ";
    cin >> a;
    cout << "Enter the value of 2nd number = ";
    cin >> b;
    //Here we call the countsetbits() function for count the setbits. 
    int setbits = countsetbits(a , b);
    cout << "Number of set bits is = " << setbits << endl;

}