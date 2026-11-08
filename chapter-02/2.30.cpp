#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    long binnary = 0;
    long tmp = 0;
    long decimal = 0;
    long place = 1;

    cout<<"Enter binary number : ";
    cin>>binnary;
    if(!cin || binnary < 0){
        cout<<"Invalid input"<<endl;
        return 1;
    }
    tmp = binnary;

    int bit = 0;
    while(tmp){
        bit=tmp%10;
        if(bit > 1){
            cout<<"Binary number must contain only 0 and 1"<<endl;
            return 1;
        }
        tmp/=10;
        decimal += bit*place;
        place *= 2;
    }

    cout<<"Decimal is : "<<decimal<<endl;


    return 0;
}
