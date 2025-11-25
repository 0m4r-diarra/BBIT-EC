#include <iostream>
using namespace std;

int main() {
    int myInt = 65;
    char myChar;

    // Casting int to char
    myChar = (char)myInt;

    cout << "Integer value: " << myInt << endl;
    cout << "Character value (after casting to char): " << myChar << endl;

    return 0;
}
