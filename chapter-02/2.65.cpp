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
    double principal = 24.0;

    cout << fixed << setprecision(2);
    cout << "Rate" << setw(30) << "Amount after 376 years" << endl;

    for (int rate = 5; rate <= 10; rate++) {
        amount = principal * pow(1.0 + rate / 100.0, 376);
        cout << setw(3) << rate << "%" << setw(30) << amount << endl;
    }

    return 0;
}
