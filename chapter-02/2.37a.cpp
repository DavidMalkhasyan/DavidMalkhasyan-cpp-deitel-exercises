#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number;
    int d1;
    int d2;
    int d3;
    int d4;
    int temp;

    cout << "Enter a four-digit integer: ";
    cin >> number;

    if (!cin || number < 1000 || number > 9999) {
        cout << "Number must have exactly four digits" << endl;
        return 1;
    }

    d1 = number / 1000;
    d2 = number / 100 % 10;
    d3 = number / 10 % 10;
    d4 = number % 10;

    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;

    temp = d1;
    d1 = d3;
    d3 = temp;

    temp = d2;
    d2 = d4;
    d4 = temp;

    cout << "Encrypted: " << d1 << d2 << d3 << d4 << endl;

    return 0;
}
