#include<iostream>
using namespace std;


class Complex{
    int real,imaginary;
    public:
        void setdata(int a, int b){
            real = a;
            imaginary = b;
        }

       void getdata(){
            cout<<"The real part of the complex number is "<<real<<endl;
            cout<<"The imaginary part of the complex number is "<<imaginary<<endl;
        }

};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    // We can make the objects by using the new keyword also.
    Complex *ptr = new Complex;

    // c1.setdata(26,4);       // This can also be written as
    // (*ptr).setdata(26,9);   This is exactly same as
    ptr->setdata(26,4);
    // c1.getdata();           // This can also be written as
    // (*ptr).getdata();          This is exactly same as
    ptr->getdata();


   return 0;

}