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
        cout << "Enter value: ";
        cin >> val;

        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    cout << "\nEnter extra value to add at end: ";
    cin >> val;

    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << "\nFinal List: ";
    Node* p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;

    return 0;
}