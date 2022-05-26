#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>s;
    //Insert the element.
    s.push("Beautiful");
    s.push("are");
    s.push("Nature");
    //Acces the element.
    cout <<"The top element in stack is = "<<s.top()<<endl;
    //integer Type stack.
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout <<"The top element in stack is = "<<st.top()<<endl;
    s.pop();
    cout <<"After pop top element in stack is = "<<s.top()<<endl;
    cout <<"Size of stack "<<s.size()<<endl;
    //check stack is empty or not 0 means not empty.
    cout <<"Empty or Not "<<s.empty()<<endl;
}