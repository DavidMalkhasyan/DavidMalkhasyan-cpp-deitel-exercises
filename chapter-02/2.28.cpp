#include <iostream>
using std::cout;
using std::cin;

int main(){
    int size = 0;

    cout<<"Enter square size (1-20) : ";
    cin>>size;
    if(size < 1 || size > 20){
        cout<<"Size must be between 1 and 20\n";
        return 1;
    }
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
                if(i == 0 || i == size-1 || j == 0 || j == size-1) cout<<"*";
                else cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
