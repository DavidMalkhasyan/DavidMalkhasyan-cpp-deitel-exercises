#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double a;
    double b;
    double c;

    cout << "Enter three nonzero side lengths: ";
    cin >> a >> b >> c;

    if (!cin || a <= 0 || b <= 0 || c <= 0)
        cout << "Sides must be positive nonzero numbers" << endl;
    else if (a + b > c && a + c > b && b + c > a)
        cout << "These values could be the sides of a triangle" << endl;
    else
        cout << "These values could not be the sides of a triangle" << endl;

    return 0;
}
