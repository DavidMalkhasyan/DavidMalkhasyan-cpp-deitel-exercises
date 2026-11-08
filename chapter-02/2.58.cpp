#include <iostream>

using std::cout;

int main()
{
    int stars;

    for (int row = 1; row <= 9; row++) {
        if (row <= 5)
            stars = 2 * row - 1;
        else
            stars = 2 * (10 - row) - 1;

        for (int space = 1; space <= (9 - stars) / 2; space++)
            cout << ' ';

        for (int star = 1; star <= stars; star++)
            cout << '*';

        cout << '\n';
    }

    return 0;
}
