//Part C – Doubly Linked List 
//Task C1 — Build and Traverse DLL
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr, nullptr};
    Node* second = new Node{20, head, nullptr};
    Node* third = new Node{30, second, nullptr};

    head->next = second;
    second->next = third;

    cout << "Forward Traversal: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    cout << "Backward Traversal: ";
    temp = third;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;

    return 0;
}