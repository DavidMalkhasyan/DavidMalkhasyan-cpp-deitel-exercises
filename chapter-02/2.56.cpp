#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int payCode = 0;
    double salary = 0;
    double hours = 0;
    double wage = 0;
    double sales = 0;
    int items = 0;
    double perItem = 0;
    double pay = 0;

    cout << std::fixed << std::setprecision(2);

    while (true) {
        cout << "Enter pay code (1 manager, 2 hourly, 3 commission, 4 piece, -1 to end): ";
        cin >> payCode;

        if (!cin || payCode == -1) break;

        switch (payCode) {
            case 1:
                cout << "Enter weekly salary: ";
                cin >> salary;
                pay = salary;
                break;
            case 2:
                cout << "Enter hours worked: ";
                cin >> hours;
                cout << "Enter hourly wage: ";
                cin >> wage;
                if (hours <= 40) pay = hours * wage;
                else pay = 40 * wage + (hours - 40) * wage * 1.5;
                break;
            case 3:
                cout << "Enter gross weekly sales: ";
                cin >> sales;
                pay = 250 + 0.057 * sales;
                break;
            case 4:
                cout << "Enter number of items produced: ";
                cin >> items;
                cout << "Enter amount paid per item: ";
                cin >> perItem;
                pay = items * perItem;
                break;
            default:
                cout << "Invalid pay code" << endl;
                continue;
        }

        cout << "Weekly pay is $" << pay << endl;
    }

    return 0;
}
