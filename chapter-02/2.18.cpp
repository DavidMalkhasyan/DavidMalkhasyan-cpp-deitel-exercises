#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    float salary = 0;

    cout << std::fixed << std::setprecision(2);

    while(salary != -1){

    cout<<"Enter sales in dollars (-1 to end) : ";
    cin>>salary;
        if(!cin || salary == -1) break;

    cout<<"Salary is : $"<< 200 + (salary*9)/100 << endl;
    }
    return 0;
}
