#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::endl;
using std::fixed;
using std::setw;
using std::setprecision;

int main()
{
    double amount;
    double principal = 1000.0;

    cout << fixed << setprecision(2);

    for (int rate = 5; rate <= 10; rate++) {
        cout << "Interest rate: " << rate << "%" << endl;
        cout << "Year" << setw(21) << "Amount on deposit" << endl;

        for (int year = 1; year <= 10; year++) {
            amount = principal * pow(1.0 + rate / 100.0, year);
            cout << setw(4) << year << setw(21) << amount << endl;
        }

        cout << endl;
    }

    return 0;
}
