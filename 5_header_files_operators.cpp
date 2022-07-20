// There are 2 types of header files:
// 1. System header files-  It comes with a compiler.
#include<iostream>
// 2. User defined header files: It is written by a programmer.
// #include "filename.h" -- This will produce an error if filename.h is not present in the current directory.

using namespace std;

int main(){
    int a=5,b=6;
    cout<<"Operators in C++:"<<endl;           // endl is same as '\n'
    cout<<"The sum of a and b is "<<a+b<<endl;
    cout<<"The difference between a and b is "<<a-b<<endl;
    cout<<"The Product of a and b is "<<a*b<<endl;
    cout<<"The quotient when a is divided by b is "<<a/b<<endl;
    cout<<"The Remainder when a is divided by b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<" ,The new value is "<<a<<endl;
    cout<<"The value of a-- is "<<a--<<" ,The new value is "<<a<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
 

// Assignment Operators --> used to assign values of variables
// int a=5,b=8;
// char p='P'

// Comparision Operator
cout<<"the value of a==b is "<<(a==b)<<endl;
cout<<"the value of a!=b is "<<(a!=b)<<endl;
cout<<"the value of a>b is "<<(a>b)<<endl;
cout<<"the value of a<b is "<<(a<b)<<endl;
cout<<"the value of a>=b is "<<(a>=b)<<endl;
cout<<"the value of a<=b is "<<(a<=b)<<endl;


// Logical Operators
cout<<"The value of logical Operator '(a==b)  and (a>b)' in C++ is "<<((a==b) && (a>b))<<endl;
cout<<"The value of logical Operator '(a==b)  or (a<b)' in C++ is "<<((a==b) || (a<b))<<endl;
cout<<"The value of logical Operator '!(a==b) in C++ is "<<(!(a==b))<<endl;

   return 0;
}