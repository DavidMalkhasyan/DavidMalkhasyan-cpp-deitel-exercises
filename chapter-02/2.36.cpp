#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    long long a;
    long long b;
    long long c;

    cout << "Enter three nonzero integers: ";
    cin >> a >> b >> c;

    if (!cin || a <= 0 || b <= 0 || c <= 0)
        cout << "Sides must be positive nonzero integers" << endl;
    else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        cout << "These values could be the sides of a right triangle" << endl;
    else
        cout << "These values could not be the sides of a right triangle" << endl;

    return 0;
}
