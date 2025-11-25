#include <iostream>
using namespace std;

int main() {
    int num = 20;
    int sum = 0;

    while (num <= 25) {
        sum += num;
        num++;
    }

    cout << "Sum from 20 to 25 is: " << sum << endl;
    return 0;
}
