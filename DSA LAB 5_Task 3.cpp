#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    int n, val, target;

    cout << "How many nodes? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Val: ";
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

    cout << "\nAfter which value do you want to insert? ";
    cin >> target;
    cout << "Enter new value: ";
    cin >> val;

    Node* curr = head;
    while (curr != NULL && curr->data != target) {
        curr = curr->next;
    }

    if (curr == NULL) {
        cout << "Value not found in list!" << endl;
    } else {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = curr->next;
        curr->next = newNode;
        cout << "Done!" << endl;
    }

    cout << "\nList: ";
    Node* p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;

    return 0;
}