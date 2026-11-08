#include <iostream>
#include <iomanip>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int count = 0; 
    int sum = 0;
    int tmp = 0;

    cin>>count;

    for(int i = 0; i < count; i++){
        cin>>tmp;
        sum+=tmp;
    };

    cout<<sum;
    
   return 0;
}