// Pointer is a data type which holds the address of other data types.

#include<iostream>

using namespace std;

int main(){
    int a=26;
    int* b=&a;                                                                 // &a gives the address of a.                
    //  & ---> (Address of) operator
    cout<<endl<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;                                     // This will give the address of a.

    //  * ---> (value at) Dereference Operator
    cout<<"The value at address b is "<<*b;

    // Pointer to Pointer
    int** c = &b;
    cout<<endl<<"The value of b is "<<&b<<endl;
    cout<<"The value of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;

    }

