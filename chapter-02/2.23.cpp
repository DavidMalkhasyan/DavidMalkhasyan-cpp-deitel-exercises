#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main(){
    int passes = 0;
    int failures = 0;
    int studentCounter = 1;
    int num = 0;

    while(studentCounter <= 10){
        num = 0;
        while(num != 1 && num != 2){
            cout<<"Enter result (1 = pass, 2 = fail): ";
            cin>>num;
            if(cin.eof()) return 1;
            if(!cin){
                cin.clear();
                cin.ignore(1000, '\n');
                num = 0;
            }
            if(num != 1 && num != 2) cout<<"Invalid input. Enter 1 or 2."<< endl;
        }

        if(num == 1) passes = passes + 1;
        else failures = failures + 1;

        studentCounter = studentCounter + 1;
    }

    cout<<"Passed "<< passes << endl;
    cout<<"Failed "<< failures << endl;

    if(passes > 8) cout<<"Raise tuition"<< endl;

    return 0;
}
