#include <iostream>
using namespace std;
struct Node {
    int data;      
    Node* next;    
};
Node* reverseLinkedList(Node* head) {
    Node* prev = NULL;   
    Node* curr = head;      
    Node* next = NULL;   

    for (; curr != NULL; ) {
        next = curr->next;  
        curr->next = prev;  
        prev = curr;        
        curr = next;       
    }
    return prev; 
}
void printList(Node* node) {
    while (node != NULL) {
        std::cout << node->data << " -> ";
        node = node->next;
    }
    std::cout << "NULL" << std::endl;
}
int main() {
     Node* head = new Node{10, new Node{20, new Node{30, new Node{40, new Node{50, NULL}}}}};
    std::cout << "Original Linked List: ";
    printList(head);
    head = reverseLinkedList(head);
    std::cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}

