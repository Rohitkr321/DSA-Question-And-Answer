#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* addressOfNextNode;

    Node(int data){
        this -> data=data;
        this -> addressOfNextNode=NULL;
    }
};
//Insert At tail.
void insertAtTail(Node* &tail, int d){
    Node* secondNode=new Node(d);
    tail -> addressOfNextNode = secondNode;
    tail = secondNode;
}
//print data. 
void print(Node* &head){
    Node* secondNode=head;
    while(secondNode!=NULL){
    cout << secondNode -> data<<" ";
   secondNode = secondNode ->addressOfNextNode ;
    }
    cout <<endl;
}
int main()
{
    Node* firstNode=new Node(0);
    Node* head=firstNode;
    Node* tail=firstNode;

/*
*Insert manualy.
*insertAtTail(tail,12);
*insertAtTail(tail,22);
*insertAtTail(tail,12);
*insertAtTail(tail,22);
*/   
    int n=10;
    for(int i=1;i<=n;i++){
         insertAtTail(tail,i);
    }
    print(head);
    return 0;
}