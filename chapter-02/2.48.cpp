#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int digit = 0;
        for(int i = 0; i < 5; i++){
            cout<<"Enter digits from 1 to 30\n";
            cin>>digit;
            if(!cin) break;
            if(digit < 1 || digit > 30) {
             cout<<"Number must be from 1 to 30\n";
             digit = 0;
             --i;
                continue;
            };
            while(digit-- > 0) cout<<"*";
            cout<<"\n";
        }
    return 0;
}
