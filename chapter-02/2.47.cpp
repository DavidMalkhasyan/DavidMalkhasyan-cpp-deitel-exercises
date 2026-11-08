#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int size = 10;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(j <= i) cout<<'*';
        }
        cout<<"\n";
    }
    cout<<"\n";

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(j < size - i) cout<<'*';
        }
        cout<<"\n";
    }
    cout<<"\n";

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(j >= i) cout<<'*';
            else cout<<' ';
        }
        cout<<"\n";
    }
    cout<<"\n";

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(j >= size - 1 - i) cout<<'*';
            else cout<<' ';
        }
        cout<<"\n";
    }

    cout<<"\n";

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(j <= i) cout<<'*';
            else cout<<' ';
        }
        cout<<"  ";
        for(int j = 0; j < size; j++){
            if(j < size - i) cout<<'*';
            else cout<<' ';
        }
        cout<<"  ";
        for(int j = 0; j < size; j++){
            if(j >= i) cout<<'*';
            else cout<<' ';
        }
        cout<<"  ";
        for(int j = 0; j < size; j++){
            if(j >= size - 1 - i) cout<<'*';
            else cout<<' ';
        }
        cout<<"\n";
    }

   return 0; 
}   
