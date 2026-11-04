#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    int n, val, target;

    cout << "How many elements? ";
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

    cout << "\nInsert BEFORE which value? ";
    cin >> target;
    cout << "Enter new value: ";
    cin >> val;

    if (head == NULL) {
        cout << "List is empty!" << endl;
    } 
    else if (head->data == target) {
        // If inserting before head node
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    } 
    else {
        Node* prev = NULL;
        Node* curr = head;

        while (curr != NULL && curr->data != target) {
            prev = curr;
            curr = curr->next;
        }

        if (curr == NULL) {
            cout << "Value not found!" << endl;
        } else {
            Node* newNode = new Node();
            newNode->data = val;
            newNode->next = curr;
            prev->next = newNode;
            cout << "Inserted!" << endl;
        }
    }

    cout << "\nUpdated List: ";
    Node* p = head;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;

    return 0;
}