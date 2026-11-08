#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;
using std::setfill;

int main()
{
    int amount = 100000;
    int rate = 5;

    cout << "Year" << setw(21) << "Amount on deposit" << endl;

    for (int year = 1; year <= 10; year++) {
        amount = (amount * (100 + rate) + 50) / 100;

        cout << setw(4) << year << setw(18) << amount / 100 << '.'
             << setfill('0') << setw(2) << amount % 100 << setfill(' ') << endl;
    }

    return 0;
}
