#include <iostream>
#include<string>
using namespace std;

// Product structure
struct Product {
    int id;
    string name;
    double price;
    int quantity;
};

int main() {
    Product p;

    // Input product details
    cout << "Enter product ID: ";
    cin >> p.id;
    
    cout << "Enter product name: ";
    cin>> p.name;
    
    cout << "Enter price: ";
    cin >> p.price;
    
    cout << "Enter quantity: ";
    cin >> p.quantity;

    // Calculate total price
    double totalPrice = p.price * p.quantity;

    // Display summary
    cout << "\n--- Product Bill Details ---" << endl;
    cout << "Product ID: " << p.id << endl;
    cout << "Product Name: " << p.name << endl;
    cout << "Price per unit: $" << p.price << endl;
    cout << "Quantity: " << p.quantity << endl;
    cout << "Total Price: $" << totalPrice << endl;

    return 0;
}