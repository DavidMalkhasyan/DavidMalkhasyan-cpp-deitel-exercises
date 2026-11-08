#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int product = 1;

    for (int i = 1; i <= 15; i += 2)
        product *= i;

    cout << "Product of the odd integers from 1 to 15 is " << product << endl;

    return 0;
}
