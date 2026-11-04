#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    
    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void append(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertAtStart(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAfter(int targetVal, int val) {
        Node* current = head;
        while (current && current->data != targetVal) {
            current = current->next;
        }

        if (!current) return; 

        Node* newNode = new Node(val);
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next) {
            current->next->prev = newNode;
        } else {
            tail = newNode; 
        }
        current->next = newNode;
    }
    void insertAtEnd(int val) {
        append(val);
    }

    void display() {
        Node* current = head;
        while (current) {
            cout << current->data;
            if (current->next) cout << " <-> ";
            current = current->next;
        }
        cout << endl;
    }
};
int main() {
    DoublyLinkedList dll;

    int initialValues[] = {10, 20, 30, 40, 50};
    for (int val : initialValues) {
        dll.append(val);
    }
    dll.insertAtStart(5);
    dll.insertAfter(20, 25);
    dll.insertAtEnd(60);
    cout << "Final List: ";
    dll.display();
    return 0;
}