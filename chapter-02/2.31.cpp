#include <iostream>

using std::cout;
using std::endl;

int main(){

    for(int i = 0; i < 8; ++i){
        if(i%2 == 1) cout<<' ';
        for(int j = 0; j < 8; ++j){
            cout<<"* ";
        }
        cout<<endl;
    }
   return 0;
}
