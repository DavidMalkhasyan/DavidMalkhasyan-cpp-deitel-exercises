#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int workedHours = 0;
    float hourRate = 0;
    float pay = 0;

    cout << std::fixed << std::setprecision(2);

    while(1){
        cout << "Enter hours worked (-1 to end) : ";
        cin >> workedHours;

        if(!cin || workedHours == -1) break;

        cout << "Enter hourly rate of the worker ($00.00): ";
        cin >> hourRate;

        if(workedHours <= 40) pay = workedHours*hourRate;
        else pay = 40*hourRate + (workedHours - 40)*hourRate*1.5;

        cout << "Salary is $" << pay << endl;
    }

    return 0;
}
