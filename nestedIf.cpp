#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string interest, assignedGroup;

    // Ask for child's age
    cout << "Enter the child's age: ";
    cin >> age;

    // Check age first
    if (age >= 4 && age <= 10) {
        // Age is valid, ask for interest
        cout << "Enter the child's interest (soccer/art/other): ";
        cin >> interest;

        // Determine play group based on interest
        if (interest == "soccer" || interest == "Soccer")
            assignedGroup = "Soccer Play Group";
        else if (interest == "art" || interest == "Art")
            assignedGroup = "Art Play Group";
        else
            assignedGroup = "Other Play Groups";

        // Display assigned group
        cout << "Assigned Group: " << assignedGroup << endl;
    } else {
        // Age not valid
        cout << "Error: Age input is not valid. Child must be between 4 and 10 years old." << endl;
    }

    return 0;
}
