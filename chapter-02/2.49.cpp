#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int productNumber;
    int quantitySold;
    double totalRetail = 0.0;

    cout << "Enter product number (1-5) and Quantity (or -1 for exit):\n";

    while (cin >> productNumber && productNumber != -1) {
        cin >> quantitySold;

        double price = 0.0;

        switch (productNumber) {
            case 1:
                price = 2.98;
                break;
            case 2:
                price = 4.50;
                break;
            case 3:
                price = 9.98;
                break;
            case 4:
                price = 4.49;
                break;
            case 5:
                price = 6.87;
                break;
            default:
                cout << "wrong number!\n";
                continue;
        }

        totalRetail += price * quantitySold;
    }
    
        cout << fixed << setprecision(2);

        cout << "Total retail value: $" << totalRetail << endl;
        return 0;
}