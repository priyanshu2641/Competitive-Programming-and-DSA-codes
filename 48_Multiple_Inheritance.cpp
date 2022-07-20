#include<iostream>
using namespace std;

class Base1{
   protected:
      int base1int;
   public:
      void set_base1int(int a){
            base1int = a;
      }
};

class Base2{
   protected:
      int base2int;
   public:
      void set_base2int(int b){
            base2int = b;
      }
};

class Derived : public Base1, public Base2{
   public:
      void show(){
            cout<<"The value of base1 is "<<base1int<<"."<<endl;
            cout<<"The value of base2 is "<<base2int<<"."<<endl;
            cout<<"The sum of base1 and base2 is "<<base1int+base2int<<"."<<endl;
      }
};

/*
The inherited Derived class will look something like this:
Data members:
   base1int ----> protected
   base2int ----> protected

Member Functions:
   set_base1int() ---> public
   set_base2int() ---> public
   show() ---> public
*/


int main(){
   Derived Priyanshu;
   Priyanshu.set_base1int(26);
   Priyanshu.set_base2int(20);
   Priyanshu.show();

   return 0;
}