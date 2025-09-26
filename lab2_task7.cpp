//Task D2 — Josephus Problem
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int josephus(int n, int m) {
    Node* head = new Node{1, nullptr};
    Node* prev = head;

    for (int i = 2; i <= n; i++) {
        prev->next = new Node{i, nullptr};
        prev = prev->next;
    }
    prev->next = head; // make circular

    Node* ptr = head;
    Node* before = prev;

    while (ptr->next != ptr) {
        for (int count = 1; count < m; count++) {
            before = ptr;
            ptr = ptr->next;
        }
        before->next = ptr->next;
        delete ptr;
        ptr = before->next;
    }
    int survivor = ptr->data;
    delete ptr;
    return survivor;
}

int main() {
    int n = 7, m = 3;
    cout << "Josephus survivor: " << josephus(n, m) << endl;
    return 0;
}