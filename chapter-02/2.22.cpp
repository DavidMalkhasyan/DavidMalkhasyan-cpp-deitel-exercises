#include <iostream>

using std::cout;
using std::cin;

int main(){
    int num = 0;
    int count = 10;
    int max = 0;
    int secondMax = 0;
    while(count > 0){
        cout<<"Enter number : ";
        cin>>num;
        if(count == 10) {
            max = num;
        }
        else if(count == 9) {
            if(num > max) {
                secondMax = max;
                max = num;
            }
            else {
                secondMax = num;
            }
        }
        else if(max<num) {
            secondMax = max;
             max = num;
        }
        else if (num > secondMax) {
            secondMax = num;
        };

        num = 0;
        --count;
    }

    cout<<"Largest is "<<max<<"\nSecond largest is "<< secondMax <<std::endl;
}
