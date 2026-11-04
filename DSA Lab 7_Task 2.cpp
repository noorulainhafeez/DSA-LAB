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

    void deleteFirst() {
        if (!head) return;
        Node* temp = head;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
    }

    void deleteNode(int val) {
        if (!head) return;
        Node* current = head;
        while (current && current->data != val) {
            current = current->next;
        }
        if (!current) return;

        if (current == head) {
            deleteFirst();
            return;
        }
        if (current == tail) {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
            return;
        }

        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
    }

    void deleteLast() {
        if (!tail) return;
        Node* temp = tail;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
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
    int initialValues[] = {101, 102, 103, 104, 105};
    for (int val : initialValues) {
        dll.append(val);
    }

    dll.insertAtStart(100);
    dll.insertAfter(103, 1035);
    dll.insertAtEnd(106);
    dll.deleteFirst();
    dll.deleteNode(104);
    dll.deleteLast();
    cout << "Final List: ";
    dll.display();

    return 0;
}