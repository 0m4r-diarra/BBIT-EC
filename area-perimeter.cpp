#include <iostream>
using namespace std;

int main() {
    // Given values
    double base = 10;
    double height = 7;
    double hypotenuse = 12;

    // Calculate area
    double area = 0.5 * base * height;

    // Calculate perimeter
    double perimeter = base + height + hypotenuse;

    // Display results
    cout << "Right-angled Triangle Details:\n";
    cout << "Base       : " << base << endl;
    cout << "Height     : " << height << endl;
    cout << "Hypotenuse : " << hypotenuse << endl;
    cout << "\nArea      : " << area << endl;
    cout << "Perimeter : " << perimeter << endl;

    return 0;
}
