#include <iostream>
using namespace std;

int main() {
    int arr[2][2][2];
    int evenCount = 0, oddCount = 0;

    cout << "Enter elements for a 2x2x2 3D array (8 values total):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "Element [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];

                if (arr[i][j][k] % 2 == 0) {
                    evenCount++;
                } else {
                    oddCount++;
                }
            }
        }
    }

    cout << "\n--- Results ---\n";
    cout << "Total Even elements: " << evenCount << endl;
    cout << "Total Odd elements: " << oddCount << endl;

    return 0;
}