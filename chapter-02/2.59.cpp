#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int rows;
    int middle;
    int distance;
    int stars;

    cout << "Enter an odd number of rows (1-19): ";
    cin >> rows;

    if (!cin || rows < 1 || rows > 19 || rows % 2 == 0) {
        cout << "Number must be odd and between 1 and 19" << endl;
        return 1;
    }

    middle = (rows + 1) / 2;

    for (int row = 1; row <= rows; row++) {
        if (row <= middle)
            distance = row;
        else
            distance = rows + 1 - row;

        stars = 2 * distance - 1;

        for (int space = 1; space <= middle - distance; space++)
            cout << ' ';

        for (int star = 1; star <= stars; star++)
            cout << '*';

        cout << '\n';
    }

    return 0;
}
