//Part B – Singly Linked List 
//Task B1 — Create and Traverse a Linked List
#include <iostream>
using namespace std;

struct Node {
    int data;  //value stored
    Node* next;  // pointer to next node
};

int main() {
    //create three nodes manually
    Node* head = new Node{10, null};
    head->second= new Node{20, null};
    Node* third = new Node{30, null};

    //link them
    head->next = second;
     second->next = third;

     //traverses list from head

    cout << " Linked List: ";
    Node* temp = head;
    while (temp != null) {
        cout << temp->data << " ";//print data
        temp = temp->next; //move to next node
    }
    

    return 0;
}