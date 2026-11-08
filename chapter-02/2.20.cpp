#include <iostream>

using std::cout;
using std::cin;

int main(){
    int num = 0;
    int count = 10;
    int max = 0;

    while(count > 0){
        cout<<"Enter number : ";
        cin>>num;
        if(count == 10 || max<num) max = num;
        num = 0;

        --count;
    }

    cout<<"Largest number is "<<max<<std::endl;
}
