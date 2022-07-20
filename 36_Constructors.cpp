/* Characteristics of Constructors
1. It should be declared in the the public section of the class.
2. They are automatically invoked(called) whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.

*/

#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
    // Creating a constructor.
    // Constructor is a special member function with same name as of the class. It is automatically invoked whenever an object is created.
    // It is used to initialize the objects of its class. 
    Complex(void);          // Constructor Declaration.

    void printNumber(){
        cout<<"Your Number is "<<a<<" + "<<b<<"i.";
    }

};

Complex :: Complex(void){
    a=4;
    b=26;
}

int main(){
    Complex c;
    c.printNumber();

   return 0;

   }
