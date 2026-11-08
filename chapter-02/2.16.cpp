
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main() {
    double usedGallon = 0;
    double miles = 0;

    double totalGallons = 0;
    double totalMiles = 0;

    cout << std::fixed << std::setprecision(6);

    while (true) {
        cout << "Enter the gallons used (-1 to end): ";
        cin >> usedGallon;
        if (!cin) break;

        if (usedGallon == -1) {
            if (totalGallons > 0) {
                cout << "The overall average miles/gallon was "
                     << totalMiles / totalGallons << endl;
            }
            break;
        }

        if (usedGallon <= 0) {
            cout << "Gallons must be greater than 0" << endl;
            continue;
        }

        cout << "Enter the miles driven: ";
        cin >> miles;

        totalMiles += miles;
        totalGallons += usedGallon;

        cout << "The miles/gallon for this tank was "
             << miles / usedGallon << endl;
    }

    return 0;
}
