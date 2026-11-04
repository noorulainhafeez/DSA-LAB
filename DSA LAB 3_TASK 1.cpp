#include <iostream>
using namespace std;
int main() {
    int arr[8];

    cout << "Enter 8 integers "<<endl;
    for (int i = 0; i < 8; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nElements in reverse order:\n";
    for (int i = 7; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}