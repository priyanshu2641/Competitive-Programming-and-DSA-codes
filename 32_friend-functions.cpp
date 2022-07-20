/*
Properties of friend Functions:
1. Not in scope of class.
2. Since it is not in the scope of the class, it cannot be called from the object of that class. Eg.- c1.sumcomplex()==Invalid.
3. Can be invoked without the help of any object.
4. Usually contains objects as arguments.
5. Can be declared inside public or private section of the class.
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/

#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        void setNumber(int n1,int n2){
            a = n1;
            b = n2; 
        }
        // Below line means that non-member - sumComplex function is allowed to do anything with my private parts (data).
        friend Complex sumComplex(Complex o1,Complex o2);
        void printNumber(){
            cout<<"The complex Number is "<<a<<" + "<<b<<" i."<<endl;
        }
};

Complex sumComplex(Complex o1,Complex o2){                                // foreign function gets access to use the private variables  
    Complex o3;                                                           // of class using friends function.
    o3.setNumber(o1.a + o2.a,o1.b + o2.b);
    return o3;
}

int main(){
    Complex c1,c2,c3; 
    c1.setNumber(26,4);
    c1.printNumber();
    c2.setNumber(5,11); 
    c2.printNumber();
    c3 = sumComplex(c1,c2);
    c3.printNumber();

   return 0;

   }
 