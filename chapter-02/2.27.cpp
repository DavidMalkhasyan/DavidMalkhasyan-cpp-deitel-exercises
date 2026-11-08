#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main(){
    int x = 5;
    int y = 8;

    cout << "a)" << endl;
    if ( y == 8 )
    if ( x == 5 ){
        cout << "@@@@@"<< endl;
    } 
    else {
    cout << "#####" << endl ;
    }
    
    cout << "$$$$$" << endl ;
    
    cout << "&&&&&" << endl ;

    cout << "b)" << endl;
    if ( y == 8 )
        if ( x == 5 )
            cout << "@@@@@" << endl;
        else {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
            cout << "&&&&&" << endl;
        }

    cout << "c)" << endl;
    if ( y == 8 ) {
        if ( x == 5 )
            cout << "@@@@@" << endl;
        else {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
        }
    }
    cout << "&&&&&" << endl;

    x = 5;
    y = 7;
    cout << "d)" << endl;
    if ( y == 8 ) {
        if ( x == 5 )
            cout << "@@@@@" << endl;
    }
    else {
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
    }
    
    return 0;
}
