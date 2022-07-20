#include<iostream>
using namespace std;
/*

Case 1:
class B: public A{
    // Order of execution --> first A() and then B()----> Base class is executed first followed by derived class.
};

Case 2:
class A: public B, public C{
    // Order of execution --> first B() and then C() and then A() ----> Base class is executed first followed by derived class.
};

Case 3:
class A: public B, virtual public C{
    // Order of execution --> first C() and then B() and then A() ----> It is a special Case(Virtual Base class is executed first followed Base class followed by derived class.)
};

*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base Class 1 Constructor called."<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base Class 2 Constructor called."<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a,int b,int c,int d): Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class Constructor Called."<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};


int main(){
    Derived Priyanshu(1,2,3,4);
    Priyanshu.printDataBase1();
    Priyanshu.printDataBase2();
    Priyanshu.printDataDerived();

    return 0;

}