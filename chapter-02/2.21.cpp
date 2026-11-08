#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int size = 0;
    int count = 1;
    cout<<"Enter size of table : "<< endl;
    cin>>size;

    cout<< "N" <<"\t"<< "10*N" << "\t"<< "100*N"<<"\t" << "1000*N"<< "\n";

    while(size>0){

    cout<< count <<"\t"<< 10*count << "\t"<< 100 * count<<"\t" << 1000*count << endl;
        ++count;
        --size;
        
    }
    return 0;
}