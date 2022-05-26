#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int unique(string s,int n)
{
    long long int ans=-1;
    for(int i=0;i<n; i++){
        for(int j=i+1;j<n; j++){
            if(s[i] ==s[j]){
                continue;
            }
            else{
                ans=j+1;
            }
        }
    }
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
   long long int ans = unique(s,n);
    cout <<ans<<endl;
    return 0;
}
