#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertStart(int val) {
    Node* temp = new Node();
    temp->data = val;
    temp->next = head;
    head = temp;
}

void insertEnd(int val) {
    Node* temp = new Node();
    temp->data = val;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        return;
    }

    Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;
}

void insertMiddle(int target, int val) {
    Node* curr = head;
    while (curr != NULL && curr->data != target) {
        curr = curr->next;
    }

    if (curr == NULL) {
        cout << "Value not found!" << endl;
        return;
    }

    Node* temp = new Node();
    temp->data = val;
    temp->next = curr->next;
    curr->next = temp;
    cout << "Inserted successfully." << endl;
}

void display() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    Node* p = head;
    while (p != NULL) {
        cout << p->data << " -> ";
        p = p->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int choice, val, target;

    while (true) {
        cout << "\n--- MENU ---\n";
        cout << "1. Insert at Start\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert in Middle\n";
        cout << "4. Display List\n";
        cout << "5. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter val: ";
            cin >> val;
            insertStart(val);
        } 
        else if (choice == 2) {
            cout << "Enter val: ";
            cin >> val;
            insertEnd(val);
        } 
        else if (choice == 3) {
            cout << "Target value: ";
            cin >> target;
            cout << "New val: ";
            cin >> val;
            insertMiddle(target, val);
        } 
        else if (choice == 4) {
            display();
        } 
        else if (choice == 5) {
            break;
        } 
        else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}