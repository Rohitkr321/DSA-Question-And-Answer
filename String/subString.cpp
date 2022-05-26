#include<bits/stdc++.h>
using namespace std;
bool isShuffledSubstring(string A, string B)
{
    int n = A.length();
    int m = B.length();

    if (n > m) {
        return false;
    }
    else {
        sort(A.begin(), A.end());
        for (int i = 0; i < m; i++) {
 
            if (i + n - 1 >= m)
                return false;

            string str = "";
 
            for (int j = 0; j < n; j++)
                str.push_back(B[i + j]);
 
            sort(str.begin(), str.end());

            if (str == A)
                return true;
        }
    }
}
int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
   bool ans= isShuffledSubstring(s1,s2);
   if(ans){
       cout<<"YES"<<endl;
   }
   else{
       cout <<"NO"<<endl;
   }
    return 0;
}