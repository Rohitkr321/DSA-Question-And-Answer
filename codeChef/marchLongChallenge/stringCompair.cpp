#include <iostream>
using namespace std;
void findM(string &s, string &T){
    for(int i=0;i<s.size();i++){
        if(s[i]==T[i])
            cout <<"G";
        else if(s[i]!=T[i])
            cout <<"B";
    }
    return;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string S;
	    cin>>S;
	    string T;
	   cin>>T;
	    findM(S,T);
	}
	return 0;
}
