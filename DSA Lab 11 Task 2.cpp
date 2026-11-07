#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedListQueue {
private:
    Node* front;
    Node* rear;

public:
    LinkedListQueue() {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Enqueued: " << val << endl;
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == NULL) rear = NULL;
        cout << "Dequeued: " << temp->data << endl;
        delete temp;
    }

    int countNodes() {
        int count = 0;
        Node* temp = front;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void displayRear() {
        if (rear == NULL) {
            cout << "Queue is empty (no rear element)." << endl;
        } else {
            cout << "Rear element: " << rear->data << endl;
        }
    }

    void clearQueue() {
        Node* temp = front;
        while (temp != NULL) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        front = rear = NULL;
        cout << "Queue cleared and memory freed." << endl;
    }

    void display() {
        if (front == NULL) {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedListQueue q;

    cout << "--- Enqueuing 5 values ---\n";
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    cout << "\nTotal nodes in queue: " << q.countNodes() << endl;

    q.displayRear();

    cout << "\n--- Clearing Queue ---\n";
    q.clearQueue();

    cout << "Total nodes after clear: " << q.countNodes() << endl;
    q.displayRear();

    return 0;
}