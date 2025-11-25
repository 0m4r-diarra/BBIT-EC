#include <iostream>
using namespace std;

int main() {
    int marks;
    
    // Ask user for marks
    cout << "Enter your marks: ";
    cin >> marks;

    // Admission decision using ternary operator
    string admissionStatus = (marks >= 50) ? "Admitted" : "Not Admitted";

    // Display result
    cout << "Admission Status: " << admissionStatus << endl;

    return 0;
}
