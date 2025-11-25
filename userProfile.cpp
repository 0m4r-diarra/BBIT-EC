#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string firstName, lastName, fullName, favoriteMeal, favoriteMovie;

    // Accept user details
    cout << "Enter your First Name: ";
    cin >> firstName;

    cout << "Enter your Last Name: ";
    cin >> lastName;

    // Combine first and last name to get full name
    fullName = firstName + " " + lastName;

    cout << "Enter your Favorite Meal: ";
    cin.ignore(); // to ignore leftover newline from previous input
    getline(cin, favoriteMeal);

    cout << "Enter your Favorite Movie: ";
    getline(cin, favoriteMovie);

    // Display user profile
    cout << "\n===== User Profile =====\n";
    cout << "First Name      : " << firstName << endl;
    cout << "Last Name       : " << lastName << endl;
    cout << "Full Name       : " << fullName << endl;
    cout << "Favorite Meal   : " << favoriteMeal << endl;
    cout << "Favorite Movie  : " << favoriteMovie << endl;
    cout << "========================\n";

    return 0;
}
