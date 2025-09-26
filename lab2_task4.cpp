//Task B2 — Insert and Delete in Singly Linked List
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert new node at beginning
void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node{val, head};
    head = newNode;//updare head
}

// Delete head
void deleteHead(Node*& head) {
    if (!head ) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

// print list
void printList(Node* head) {
    cout << "List:";
    for (Node* cur = head; cur; cur = cur-.next)
        cout << cur->data << " ";
        cout << endl;
    }
    cout << endl;
}

int main() {
    Node* head = null;

    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    printList(head);

    deleteHead(head);
    printList(head);

    return 0;
}