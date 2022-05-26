#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter Rupes in intgere = ";
    cin>>number;
    cout << endl;
    
        int hundred=number/100;
        cout << hundred << " Hundred rupes of notes. "<< endl;
        int hundred_reminder=number%100;

        int fifty=hundred_reminder/50;
        cout << fifty << " Fifty rupes of notes. "<< endl;
        int fifty_reminder=hundred_reminder%50;

        int twenty=fifty_reminder/20;
        cout << twenty << " Twenty rupes of notes. "<< endl;
        int twenty_reminder=fifty_reminder%20;

        int one=twenty_reminder/1;
        cout << one << " One rupes of notes. "<< endl;
        int one_reminder=twenty_reminder%1;
   
}