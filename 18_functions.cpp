#include<iostream>
using namespace std; 

int sum(int a, int b){
    return a+b;
}

int product(int a, int b){
    return a*b;
}
void greet(){
    cout<<"Hello, Here is the Calculator for Addition and Multiplication of 2 Numbers.";
}

int main(){
    greet();
    int n1,n2;
    cout<<endl<<"Enter the first Number: "; 
    cin>>n1;
    cout<<"Enter the second Number: ";
    cin>>n2;
    cout<<"The sum of the 2 numbers is "<<sum(n1,n2);
    cout<<endl<<"The product of the 2 numbers is "<<product(n1,n2);
    return 0;
    }