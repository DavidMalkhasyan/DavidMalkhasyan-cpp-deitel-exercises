#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num = 0;
    int tmp = 0;
    int reverse = 0;
    cout<<"Enter five-digit number : ";
    cin>>num;
    if(!cin || num < 10000 || num > 99999){
        cout<<"Number must have exactly five digits"<<endl;
        return 1;
    }
    tmp = num;
    while(tmp){
        reverse += tmp%10;
        reverse*=10;
        tmp/=10;
    }
    reverse/=10;

    if(reverse == num) cout<<"Number is palindrome"<<endl;
    else cout<<"Number is not palindrome"<<endl;
    return 0;
}
