#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;
using std::dec;
using std::oct;
using std::hex;
using std::uppercase;

int main(){
    cout<<setw(8)<<"Decimal"<<"    "<<"Binary   "<<setw(8)<<"Octal"<<setw(6)<<"Hex"<<'\n';
    for(int i = 1; i <= 256; i++) {
        cout<<dec<<setw(8)<<i<<"    ";
        for(int j = 8; j >=0;j-- ){
            cout<<((i>>j)&1);
        }
        cout<<oct<<setw(8)<<i<<hex<<uppercase<<setw(6)<<i<<'\n';
    }
   return 0;
}
