#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* input(){
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1){
        Node* newNodeAddress =new  Node(data);

        if(head==NULL){
            head = newNodeAddress;
            tail = newNodeAddress;
        }
        else{
            tail->next = newNodeAddress;
            tail=newNodeAddress;
        }
        cin>>data;
    }
    return head;
}
Node* delethekthPoistion(Node* head, int n){
   Node* temp=head;
   if(temp==NULL || temp->next==NULL){
        return head;
    }

    int count=0;
    while(temp!=NULL ){
        temp=temp->next;
        count++;

        if(count==n){
        Node* del = temp->next;
        temp->data=del->data;
        temp->next=del->next;
    }
    }
        return head;
}
void printData(Node* head){
    while(head!=NULL){
        cout <<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    Node* head = input();
    printData(head);
    int i;
    cin>>i;
    Node* ans=delethekthPoistion(head,i);
    printData(ans);
    return 0;
}