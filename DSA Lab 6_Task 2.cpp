#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display() {
    Node* temp = head;
    if (temp == nullptr) {
        cout << "List is empty\n";
        return;
    }

    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << "\n";
}

void deleteAtEnd() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

void deleteAtPosition(int position) {
    if (head == nullptr) {
       cout << "List is empty\n";
        return;
    }

    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
 
    for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

   
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of range\n";
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

int main() {
    
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);

   
    deleteAtEnd();
    display(); 

    deleteAtPosition(2);
    display(); 

    return 0;
}