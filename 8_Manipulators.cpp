#include<iostream> 
#include<iomanip>                             // setw manipulotor is present in "iomanip"  Header File.

using namespace std; 

int main(){ 
// ********************************** Manipulators ********************************************************************

// We have already seen a manipulator earlier a manipultor "endl"
    int a=4, b=26, c=2001;
    cout<<"The value of a without setw is "<<a<<endl;
    cout<<"The value of b without setw is "<<b<<endl;
    cout<<"The value of c without setw is "<<c<<endl;


    cout<<"The value of a with setw is "<<setw(4)<<a<<endl;                     // setw ---> set with
    cout<<"The value of b with setw is "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is "<<setw(4)<<c<<endl;

    return 0;

    }
