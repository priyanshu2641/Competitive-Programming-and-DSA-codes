#include<iostream>

int main()
{
    int num1 , num2;
    std::cout<<"Enter the first number: ";      // << is called the insertion operator.
    std::cin>>num1;                             // >> is called extraction operator.       
    std::cout<<"Enter the second number: ";      // << is called the insertion operator.
    std::cin>>num2;                             // >> is called extraction operator.
    std::cout<<"The Product of the 2 numbers is "<< num1*num2;   
    return 0;
}      