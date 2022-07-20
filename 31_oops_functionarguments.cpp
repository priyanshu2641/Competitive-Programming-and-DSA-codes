// we can pass objects in class in the same way as we pass int,float.

#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
    void setData(int x, int y){
        a=x;
        b=y;
    }

    void setDatabySum(complex a1, complex a2){
        a=a1.a +a2.a;
        b=a1.b +a2.b;
    }

    void printNumber(){
        cout<<"Your Complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main(){
    complex c1,c2,c3;
    c1.setData(1,3);
    c1.printNumber();
    c2.setData(6,8);
    c2.printNumber();

    c3.setDatabySum(c1,c2);
    c3.printNumber();

   return 0;

   }