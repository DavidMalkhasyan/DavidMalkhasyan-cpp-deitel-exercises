#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int terms;
    int i;
    double term;
    double e;

    cout << "Enter the number of terms: ";
    cin >> terms;

    if (!cin || terms < 0) {
        cout << "Number of terms must not be negative" << endl;
        return 1;
    }

    e = 1.0;
    term = 1.0;
    i = 1;
    while (i <= terms) {
        term /= i;
        e += term;
        ++i;
    }

    cout << std::fixed << std::setprecision(10);
    cout << "e is approximately " << e << endl;

    return 0;
}
