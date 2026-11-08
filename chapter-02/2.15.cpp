#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int y;
    int x = 1;
    int total = 0;

    while (x <= 10) {
        y = x * x;  // 
        cout << y << endl; // 1, 4, 9, 16, 25, 36, 49, 64, 81, 100
        total += y;
        ++x;
    }

    cout << "Total is " << total << endl; //385

    return 0;
}