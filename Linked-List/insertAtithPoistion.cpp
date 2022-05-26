#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node* address;
    Node(int data){
        this->data=data;
        this->address=NULL;
    }
};
Node* takeInput(){
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1){
        Node* newNode = new Node(data);

        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->address = newNode;
            tail = newNode;
        }
        cin>>data;
    }
    return head;
}
Node * insertAtithPoistion(Node* head, int i, int data){

  Node *newNode = new Node(data);
	int count = 0;
	Node *temp = head;

	if(i == 0) {
		newNode -> address = head;
		head = newNode;
		return head;
	}

	while(temp != NULL && count < i - 1) {
		temp = temp -> address;
		count++;
	}
	if(temp != NULL) {
		Node *a = temp -> address;
		temp -> address = newNode;
		newNode -> address = a;
	}
	return head;

}
void printData(Node* head){
    
    while(head!=NULL){
        cout <<head->data<<" ";
        head= head->address;
    }
}
int main()
{
    Node* head = takeInput();
    printData(head);
    int i, data;
    cin >> i >> data;
    head = insertAtithPoistion(head, i, data);
    printData(head);
        return 0;
}