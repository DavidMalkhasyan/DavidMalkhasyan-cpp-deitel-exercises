#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main()
{
    double pi = 0.0;
    double sign = 1.0;
    int term = 1;
    int found1 = 0;
    int found2 = 0;
    int found3 = 0;
    int found4 = 0;

    cout << std::fixed << std::setprecision(6);
    cout << setw(10) << "Terms" << setw(14) << "Pi estimate" << endl;

    while (found4 == 0) {
        pi += sign * 4.0 / (2 * term - 1);
        sign = -sign;

        if (term <= 10)
            cout << setw(10) << term << setw(14) << pi << endl;

        if (found1 == 0 && pi >= 3.135 && pi < 3.145) {
            found1 = 1;
            cout << "3.14 after " << term << " terms" << endl;
        }
        if (found2 == 0 && pi >= 3.1405 && pi < 3.1415) {
            found2 = 1;
            cout << "3.141 after " << term << " terms" << endl;
        }
        if (found3 == 0 && pi >= 3.14145 && pi < 3.14155) {
            found3 = 1;
            cout << "3.1415 after " << term << " terms" << endl;
        }
        if (found4 == 0 && pi >= 3.141585 && pi < 3.141595) {
            found4 = 1;
            cout << "3.14159 after " << term << " terms" << endl;
        }
        term++;
    }

    return 0;
}
