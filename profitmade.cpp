#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double buyingPrice, sellingPrice, profit;

    // Get user input
    cout << "Enter the buying price of the vehicle: ";
    cin >> buyingPrice;

    cout << "Enter the selling price of the vehicle: ";
    cin >> sellingPrice;

    // Compute profit
    profit = sellingPrice - buyingPrice;

    // Display result
    if (profit > 0) {
        cout << "Profit made from selling the vehicle is: " << profit << endl;
    } else if (profit < 0) {
        cout << "You made a loss of: " << -profit << endl;
    } else {
        cout << "No profit, no loss. Break-even." << endl;
    }

    return 0;
}
