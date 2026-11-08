#include <iostream>
#include <iomanip>
#include <climits>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int min = INT_MAX;
    int count = 0;
    int num = 0;

    cin>>count;
    if(!cin || count < 1){
        cout<<"No values to compare"<<endl;
        return 0;
    }
    for(int i = 0; i < count; i++){
        cin>>num;
        if(min >num ){
            min = num;
        }
    }

    cout<<min<<endl;
   return 0;
}
