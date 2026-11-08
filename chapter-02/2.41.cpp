#include <iostream>
#include <iomanip>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int sum = 0;
    int count = 0;
    int tmp = 0;

    cout<<"Enter digits (9999 to end)" << endl;
    for(cin>>tmp; cin && tmp != 9999; cin>>tmp){
        sum+=tmp;
        ++count;
    };

    if(count > 0) cout<<"Average is "<<static_cast<double>(sum)/count<<endl;
    else cout<<"No values entered"<<endl;
    
   return 0;
}
