#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;

int main() {
    int accountNumber = 0;
    double beginningBalance = 0;
    double totalCharges = 0;
    double totalCredits = 0;
    double creditLimit = 0;
    double balance = 0;

    cout << std::fixed << std::setprecision(2);

    while (accountNumber != -1) {
        cout << "Enter account number (-1 to end): ";
        cin >> accountNumber;
        if (!cin) break;

        if (accountNumber == -1) break;

        cout << "Enter beginning balance: ";
        cin >> beginningBalance;

        cout << "Enter total charges: ";
        cin >> totalCharges;

        cout << "Enter total credits: ";
        cin >> totalCredits;

        cout << "Enter credit limit: ";
        cin >> creditLimit;

        balance = beginningBalance + totalCharges - totalCredits;

        if (balance > creditLimit) {
            cout << "Account: " << accountNumber << '\n';
            cout << "Credit limit: " << creditLimit << '\n';
            cout << "Balance: " << balance << '\n';
            cout << "Credit Limit Exceeded.\n";
        }
    }

    return 0;
}