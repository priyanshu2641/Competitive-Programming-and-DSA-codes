#include<iostream>
using namespace std; 

// int sum(int a, int b);            //Acceptable
// int sum(int a, b);                //Not Acceptable
int sum(int, int);                   //Acceptable
int product(int, int);               //Acceptable
void greet(void);                    //Acceptable
void greet();                        //Acceptable

int main(){
    greet();
    int n1,n2;
    cout<<endl<<"Enter the first Number: "; 
    cin>>n1;
    cout<<"Enter the second Number: ";
    cin>>n2;
    // n1 and n2 are actual parameters.
    cout<<"The sum of the 2 numbers is "<<sum(n1,n2);
    cout<<endl<<"The product of the 2 numbers is "<<product(n1,n2);
    return 0;
    }


int sum(int a, int b){
    // Formal parameters a and b will be taking values from actual parameters n1 and n2.
    return a+b;
}

int product(int a, int b){
    return a*b;
}
void greet(){
    cout<<"Hello, Here is the Calculator for Addition and Multiplication of 2 Numbers.";
}