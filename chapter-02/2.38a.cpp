#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n;
    int i;
    long long factorial;

    cout << "Enter a nonnegative integer (0-20): ";
    cin >> n;

    if (!cin || n < 0 || n > 20) {
        cout << "Number must be between 0 and 20" << endl;
        return 1;
    }

    factorial = 1;
    i = 2;
    while (i <= n) {
        factorial *= i;
        ++i;
    }

    cout << n << "! = " << factorial << endl;

    return 0;
}
