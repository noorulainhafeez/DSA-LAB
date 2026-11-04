#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    int n, val;

    cout << "How many numbers to enter? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter number: ";
        cin >> val;

        Node* temp = new Node();
        temp->data = val;
        temp->next = head;
        head = temp;
    }

    cout << "\nList values: ";
    Node* p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    cout << "\n\nEnter new value to put at start: ";
    cin >> val;

    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;

    cout << "New List: ";
    p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;

    return 0;
}