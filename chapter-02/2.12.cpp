#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::endl;
using std::fixed;
using std::left;
using std::right;
using std::setprecision;
using std::setw;

int main()
{
    int sum;
    int count;
    int x;

    sum = 0;
    for (count = 1; count <= 99; count += 2)
        sum += count;
    cout << "a) " << sum << endl;

    cout << "b) " << fixed << left
         << setprecision(1) << setw(15) << 333.546372
         << setprecision(2) << setw(15) << 333.546372
         << setprecision(3) << setw(15) << 333.546372 << endl;

    cout << "c) " << right << fixed << setprecision(2)
         << setw(10) << pow(2.5, 3) << endl;

    cout << "d)" << endl;
    x = 1;
    while (x <= 20) {
        cout << x;
        if (x % 5 == 0)
            cout << endl;
        else
            cout << '\t';
        x++;
    }

    cout << "e)" << endl;
    for (x = 1; x <= 20; x++) {
        cout << x;
        if (x % 5 == 0)
            cout << endl;
        else
            cout << '\t';
    }

    return 0;
}
