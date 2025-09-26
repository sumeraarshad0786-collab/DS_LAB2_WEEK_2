//Task A2 — Delete from Array
#include <iostream>
using namespace std;

int main() {
    int A[10] = {2, 6, 8,  7, 1};  // initial array
    int size = 5;
    int pos = 2;  // delete element at index 2

    for (int i = pos; i < size - 1; ++i)
        A[i] = A[i + 1];            // shift elements left

    size--;  // reduce logical size

    cout << "After deletion: ";
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}