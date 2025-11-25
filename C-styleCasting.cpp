#include <iostream>
using namespace std;

int main() {
    int myInt = 10;
    double myDouble;

    // Implicit casting: int -> double
    myDouble = myInt;

    cout << "Integer value: " << myInt << endl;
    cout << "Double value (after implicit casting): " << myDouble << endl;

    return 0;
}
