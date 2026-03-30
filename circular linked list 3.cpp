#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
Node* insertAtPosition(Node* head,int value,int pos){
	Node* newNode = new Node();
	newNode->data = value;
	if(head==NULL){
		if(pos==1){
			newNode->next = newNode;
			return newNode;
 		} else{
 			cout<<"invalid position!"<<endl;
 			return head;
		 }
	}
	if (pos == 1){
		Node* temp = head;
		while(temp->next != head){
			temp = temp->next;
		}
		newNode->next = head;
		temp->next = newNode;
		head = newNode;
		return head;
	}
	Node* temp = head;
	for(int i = 1;i< pos-1; i++){
		temp = temp->next;
		if(temp->next == head){
			break;
		}
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return head;
}
void display(Node* head){
	if (head == NULL)
	return;
	Node* temp = head;
	do{
		cout<< temp->data<<"->";
		temp=temp->next;
	} while (temp !=head);
	cout<<"back to head"<<endl;
}
int main(){
	Node* head = NULL;

	head = insertAtPosition(head, 10, 1);
	head = insertAtPosition(head, 20,2);
	head = insertAtPosition(head, 30, 3);
	head = insertAtPosition(head, 25, 3);
    display(head);
return 0;
};
