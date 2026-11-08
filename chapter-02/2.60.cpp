#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int x;

    for (x = 1; x <= 10 && x != 5; x++)
        cout << x << " ";

    cout << "\nBroke out of loop when x became " << x << endl;

    return 0;
}
