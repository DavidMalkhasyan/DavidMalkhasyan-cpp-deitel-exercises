#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double x;
    int terms;
    int i;
    double term;
    double result;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter the number of terms: ";
    cin >> terms;

    if (!cin || terms < 0) {
        cout << "Invalid input" << endl;
        return 1;
    }

    result = 1.0;
    term = 1.0;
    i = 1;
    while (i <= terms) {
        term = term * x / i;
        result += term;
        ++i;
    }

    cout << std::fixed << std::setprecision(10);
    cout << "e^x is approximately " << result << endl;

    return 0;
}
