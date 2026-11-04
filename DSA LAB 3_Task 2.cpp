#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    cout << "Enter elements for a 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];

            if (matrix[i][j] > 0) {
                positiveCount++;
            } else if (matrix[i][j] < 0) {
                negativeCount++;
            } else {
                zeroCount++;
            }
        }
    }

    cout << "\n--- Results ---\n";
    cout << "Positive elements: " << positiveCount << endl;
    cout << "Negative elements: " << negativeCount << endl;
    cout << "Zero elements: " << zeroCount << endl;

    return 0;
}