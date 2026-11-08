#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main()
{
    cout << setw(4) << "n" << setw(8) << "n!" << endl;

    for (int n = 1; n <= 5; n++) {
        int factorial = 1;

        for (int i = 1; i <= n; i++)
            factorial *= i;

        cout << setw(4) << n << setw(8) << factorial << endl;
    }

    return 0;
}
