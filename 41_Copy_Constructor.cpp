#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num; 
        }
        // When no copy constructor is found, Compiler supplies its own copy constructor.
        Number(Number &obj){     
            cout<<"Copy Constructor Called."<<endl;
            a = obj.a; 
        }

        void display(){
            cout<<"The number of this object is "<<a<<endl;
        }

};


int main(){ 
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);
    z1.display();

    z2=x;                    // Copy Constructor is not invoked(called) in this case as object is already assigned in line 27.
    z2.display();

    Number z3 = y;           // Copy Constructor invoked.
    z3.display();

    return 0;

   }