#include <iostream>
#include <string>
using namespace std;

int main() {
    // Customer details
    string firstName, lastName;
    int age, creditScore;
    double monthlyIncome;

    // Capture customer details
    cout << "Enter First Name: ";
    cin >> firstName;

    cout << "Enter Last Name: ";
    cin >> lastName;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Monthly Income: ";
    cin >> monthlyIncome;

    cout << "Enter Credit Score: ";
    cin >> creditScore;

    // Check loan qualification
    bool qualified = (age >= 22 && age <= 60) &&
                     (monthlyIncome >= 50000) &&
                     (creditScore >= 600);

    // Display results
    cout << "\n===== Loan Qualification Result =====\n";
