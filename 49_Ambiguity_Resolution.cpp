#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are You?"<<endl;
    }
};

class Base2{
    public:
        void greet(){
            cout<<"Whatsuppp?"<<endl;
    }
};

class Derived : public Base1, public Base2{
    public:
        void greet(){
            Base2 :: greet();
        }
};

int main(){
    Base1 A;
    Base2 B;
    A.greet();
    B.greet();
    Derived D;
    D.greet();

   return 0;

}