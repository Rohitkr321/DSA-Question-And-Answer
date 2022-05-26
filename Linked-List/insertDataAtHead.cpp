#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* nextLocation;
    //Constructor.
    Node(int data){
        this ->data=data;
        this ->nextLocation=NULL;
    }

};
//Insert the element at head or from end.
void insertData(Node*& head,int d){
    //New node create.
    Node* temp=new Node(d);
    temp -> nextLocation=head;
    head=temp;
}    
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout <<temp ->data<<" ";
        temp= temp->nextLocation;
    }
    cout <<endl;
}
int main()
{
    /*
        *Staticaly Create.
        Node object;
        object.data=10;
        cout <<object.data<<endl;
    */
   //Create New node.
    Node* node1 = new Node(10);
    cout <<node1 ->data<<endl;
    cout <<node1 ->nextLocation<<endl;
    //Head point to node1
    Node* head=node1;
    print(head);

    insertData(head,12);
    print(head);
    return 0;
}