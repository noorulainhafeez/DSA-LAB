#include <iostream>
using namespace std;

//Student structure
struct Student {
    string name;
    int rollNumber;
    float marks;
};
int main() {
    Student s;
    
    // Input student details
    cout << "Enter student name: ";
    cin>>s.name;
    cout << "Enter roll number: ";
    cin >> s.rollNumber;
    cout << "Enter marks: ";
    cin >> s.marks;
    
    // Display student information and result
    cout << " Student Result " <<endl;
    cout << "Name: " << s.name <<endl;
    cout << "Roll Number: " << s.rollNumber <<endl;
    cout << "Marks: " << s.marks <<endl;
    
    // Check pass/fail 
    if (s.marks >= 50) {
        cout << " PASS" <<endl;
    } else {
        cout << "FAIL" << endl;
    }
    return 0;
}