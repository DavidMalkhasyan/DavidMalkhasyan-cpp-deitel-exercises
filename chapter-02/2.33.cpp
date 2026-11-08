#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double radius = 0;
    double pi = 3.14159;

    cout<<"Enter radius : ";
    cin>>radius;

    cout<<"Diameter : "<< 2 * radius << endl;
    cout<<"Circumference : "<< 2 * pi * radius << endl;
    cout<<"Area : "<< pi * radius * radius << endl;

    return 0;
}
