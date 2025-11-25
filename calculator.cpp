#include <iostream>
#include <string>
using namespace std;

int main() {
    // ===== Step 1: Declare variables =====
    string firstName, middleName, lastName, fullName;
    double num1, num2;
    double sum, difference, product, quotient;
    int intNum1, intNum2, remainder;

    // ===== Step 2: Get user profile =====
    cout << "Enter your First Name: ";
    cin >> firstName;

    cout << "Enter your Middle Name: ";
    cin >> middleName;

    cout << "Enter your Last Name: ";
    cin >> lastName;

    fullName = firstName + " " + middleName + " " + lastName;

    // ===== Step 3: Get numbers for calculation =====
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Convert to int for modulus operation
    intNum1 = static_cast<int>(num1);
    intNum2 = static_cast<int>(num2);

    // ===== Step 4: Perform calculations =====
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0)
        quotient = num1 / num2;

    if (intNum2 != 0)
        remainder = intNum1 % intNum2;

    // ===== Step 5: Display results =====
    cout << "\n===== User Profile =====\n";
    cout << "Full Name      : " << fullName << endl;

    cout << "\n===== Calculator Results =====\n";
    cout << num1 << " + " << num2 << " = " << sum << endl;
    cout << num1 << " - " << num2 << " = " << difference << endl;
    cout << num1 << " * " << num2 << " = " << product << endl;

    if (num2 != 0)
        cout << num1 << " / " << num2 << " = " << quotient << endl;
    else
        cout << "Division by zero is not allowed!" << endl;

    if (intNum2 != 0)
        cout << intNum1 << " % " << intNum2 << " = " << remainder << endl;
    else
        cout << "Modulus by zero is not allowed!" << endl;

    return 0;
}
