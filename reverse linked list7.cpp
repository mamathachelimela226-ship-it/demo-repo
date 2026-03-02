#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void insertEnd(Node** head, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}
void reverseList(Node** head) {
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;  
        current->next = prev;  
        prev = current;        
        current = next;       
    }
    *head = prev;              
}


void display(Node* node) {
    while (node != NULL) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}
int main() {
    Node* head = NULL;
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    insertEnd(&head, 4);
    insertEnd(&head, 5);
    
    cout << "Original Linked List: ";
    display(head);
    
   reverseList(&head);
    
    cout << "Reversed Linked List: ";
    display(head);
    
    return 0;
}


