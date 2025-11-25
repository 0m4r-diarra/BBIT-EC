#include <iostream>
using namespace std;

int main() {
    int num = 12;

    while (num <= 28) {
        cout << num;
        if (num < 28) {
            cout << ",";
        }
        num += 2;
    }

    cout << endl;
    return 0;
}
