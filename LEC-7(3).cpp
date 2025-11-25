#include <iostream>
#include <string>
using namespace std;

int main() {
    string password = "1234"; // correct password
    string userInput;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter password: ";
        cin >> userInput;

        if (userInput == password) {
            cout << "Access granted!" << endl;
            break;
        } else {
            attempts++;
            cout << "Wrong password!" << endl;
        }

        if (attempts == 3) {
            cout << "Password blocked!" << endl;
        }
    }

    return 0;
}
