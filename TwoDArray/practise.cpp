#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
      int A,B,C,D;
      cin>>A>>B>>C>>D;

      for(int i=1;i<B;i++){
          if((i-1)*i==B && (i-1)-i==A && (i-1)+i==D && (i-1)/i==c ){
              cout << i-1 <<" "<<i<<endl;
              return 0 ;
          }
      }
    }
    cout <<"-1"<<" "<<"-1"<<endl;
    return 0;
}