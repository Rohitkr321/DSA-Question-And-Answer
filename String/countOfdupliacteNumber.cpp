#include<bits/stdc++.h>
using namespace std;
void countSame(string s)
{
    int arr[26]={0};
    int ans=0;
    int sum=0;
    cout <<"Length of String:- "<<s.length()<<endl;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        number=ch-'a';//change in number.
        arr[number]++;
    }
    for(int i=0;i<26;i++){
         if(arr[i]==1){
            ans=i;
            char finalAns='a'+ans;//change in alphabate.
            cout <<finalAns<<" Comes "<<" 1 "<< " Time "<<endl;
        }
        if(arr[i]>1){
            ans=i;
            char finalAns='a'+ans;//change in alphabate.
            cout <<finalAns<< " Comes "<<arr[i]<<" Times" << endl;
            
        }
       
    }
    
}
int main()
{
    string s;
    getline(cin,s);//Space also include.
    countSame(s);
    return 0;
    /*
        *If you want print the string without spacr then use normal 'cin' function.
    */
}