#include<bits/stdc++.h>
using namespace std;
void shufle(string s1 , string s2, string result)
{
    int s1_length=s1.length();
    int s2_length=s2.length();
    int result_length=result.length();
    if((s1_length+s2_length )!=result_length)
        cout <<"No"<<endl;
    else{
        int f=1;
        int i=0,j=0,k=0;//i point s1 , j point s2 and k point result string. 
        while(k<result_length)
        {
            if(i<s1_length && s1[i] == result[k] )
                    i++;
            else if(j<s2_length && s2[j] == result[k])
                    j++;
            else{
                f=1;
                break;
            }
            k++;
        }
        if(i<s1_length || j<s2_length)
            cout <<"no"<<endl;
        else{
            cout <<"Yes"<<endl;
        }
       
    }
}
int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    string result;
    getline(cin,result);
    shufle(s1,s2,result);
    return 0;
}