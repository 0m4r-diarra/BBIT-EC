#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;

    // Ask user for input
    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    // Compute sum
    sum = num1 + num2;

    // Display result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
