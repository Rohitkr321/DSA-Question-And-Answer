#include <bits/stdc++.h>
using namespace std;
class Account
{
    int balance;
    static float roi; // static variable or class variable.
public:
    void setBalance(int bla)
    {
        balance = bla;
    }
   static void setRoi(float rateOfIntreset){
       roi = rateOfIntreset;
    }
   static void getRoi(){
        cout<<roi<<endl;
    }
};
float Account:: roi;
int main()
{
    Account::setRoi(7.5);//staic variable can be also call without uses object because it does not deeepnd up om oject.
    Account::getRoi();
    return 0;
}