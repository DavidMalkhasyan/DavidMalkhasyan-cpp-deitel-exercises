#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int mismatches;
    int tests;

    mismatches = 0;
    tests = 0;
    for (int x = 0; x <= 10; x++)
        for (int y = 0; y <= 14; y++) {
            bool original = !(x < 5) && !(y >= 7);
            bool converted = !((x < 5) || (y >= 7));
            ++tests;
            if (original != converted) ++mismatches;
        }
    cout << "a) !(x < 5) && !(y >= 7)  ==  !((x < 5) || (y >= 7))" << endl;
    cout << "   tests: " << tests << ", mismatches: " << mismatches << endl;

    mismatches = 0;
    tests = 0;
    for (int a = 0; a <= 3; a++)
        for (int b = 0; b <= 3; b++)
            for (int g = 3; g <= 7; g++) {
                bool original = !(a == b) || !(g != 5);
                bool converted = !((a == b) && (g != 5));
                ++tests;
                if (original != converted) ++mismatches;
            }
    cout << "b) !(a == b) || !(g != 5)  ==  !((a == b) && (g != 5))" << endl;
    cout << "   tests: " << tests << ", mismatches: " << mismatches << endl;

    mismatches = 0;
    tests = 0;
    for (int x = 5; x <= 12; x++)
        for (int y = 2; y <= 7; y++) {
            bool original = !(x <= 8) && (y > 4);
            bool converted = !((x <= 8) || !(y > 4));
            ++tests;
            if (original != converted) ++mismatches;
        }
    cout << "c) !(x <= 8) && (y > 4)  ==  !((x <= 8) || !(y > 4))" << endl;
    cout << "   tests: " << tests << ", mismatches: " << mismatches << endl;

    mismatches = 0;
    tests = 0;
    for (int i = 2; i <= 7; i++)
        for (int j = 4; j <= 9; j++) {
            bool original = !(i > 4) || (j <= 6);
            bool converted = !((i > 4) && !(j <= 6));
            ++tests;
            if (original != converted) ++mismatches;
        }
    cout << "d) !(i > 4) || (j <= 6)  ==  !((i > 4) && !(j <= 6))" << endl;
    cout << "   tests: " << tests << ", mismatches: " << mismatches << endl;

    return 0;
}
