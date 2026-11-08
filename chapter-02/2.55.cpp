#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int count = 0;

    for (int side1 = 1; side1 <= 500; side1++)
        for (int side2 = side1; side2 <= 500; side2++)
            for (int hypotenuse = side2; hypotenuse <= 500; hypotenuse++)
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    cout << side1 << ' ' << side2 << ' ' << hypotenuse << endl;
                    ++count;
                }

    cout << "Triples found: " << count << endl;

    return 0;
}
