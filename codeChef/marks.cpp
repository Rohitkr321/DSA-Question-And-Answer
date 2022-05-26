#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,ans=0,countC=0,countD=0,countN=0;
	    cin>>x;
	    char arr[14];
	    for(int i=0;i<14;i++){
	        cin>>arr[i];
	    }
	   for(int j=0;j<14;j++){
	       if(arr[j]=='C'){
	            countC++;
	       }     
	      else if(arr[j]=='N') {    
	            countN++;
	       }     
	      
	      else if(arr[j]=='D'){
	            countD++;
	       }    
	   }    
	       if(countC>countN  && countC!=countN){
	           cout << 60*x <<endl;
	       }
	        else if(countN>marksC){
	           cout << 40*x <<endl;
	       }
	       else if(marksN==marksC){
	           cout << 55*x <<endl;
	       }
	       else if(countC>countD || countC<countD || countC==countD){
	           cout << 2*countC + 1*countD<<endl;
	       }
	       
	}
	return 0;
}
	

