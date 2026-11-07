#include <iostream>
using namespace std;

#define SIZE 6

class BankQueue {
private:
    int queue[SIZE];
    int front, rear, count, tokenCounter;

public:
    BankQueue() {
        front = 0;
        rear = -1;
        count = 0;
        tokenCounter = 100;
    }

    void issueToken() {
        if (count == SIZE) {
            cout << "\n[ALERT] Waiting room is full! Cannot issue more tokens right now.\n";
            return;
        }
        tokenCounter++;
        rear = (rear + 1) % SIZE;
        queue[rear] = tokenCounter;
        count++;
        cout << "\n[SUCCESS] Token #" << tokenCounter << " issued to customer.\n";
    }

    void serveCustomer() {
        if (count == 0) {
            cout << "\n[ALERT] Nobody is waiting in the queue.\n";
            return;
        }
        cout << "\n[SERVED] Customer with Token #" << queue[front] << " has been served.\n";
        front = (front + 1) % SIZE;
        count--;
    }

    void showWaitingCustomers() {
        if (count == 0) {
            cout << "\n[INFO] Nobody is waiting.\n";
            return;
        }
        cout << "\n--- Waiting Customers ---\n";
        int index = front;
        for (int i = 0; i < count; i++) {
            cout << "Token #" << queue[index] << endl;
            index = (index + 1) % SIZE;
        }
        cout << "Total waiting: " << count << endl;
    }
};

int main() {
    BankQueue bq;
    int choice;

    do {
        cout << "\n==============================\n";
        cout << "    BANK TOKEN SYSTEM MENU    \n";
        cout << "==============================\n";
        cout << "1. Issue Token (Enqueue)\n";
        cout << "2. Serve Customer (Dequeue)\n";
        cout << "3. Show Waiting Customers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bq.issueToken();
                break;
            case 2:
                bq.serveCustomer();
                break;
            case 3:
                bq.showWaitingCustomers();
                break;
            case 4:
                cout << "\nExiting system. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}