#include<iostream>
using namespace std;

// Forward Declaration becomes X does not know that Y exist.
class Y;

class X{
   int data1;
   friend void add(X, Y);
   public:
      void setValue(int Value){
         data1=Value;
      }
};

class Y{
   int data2;
   friend void add(X, Y);
   public:
      void setValue(int Value){
         data2=Value;
      }
};

void add(X o1,Y o2){
   cout<<"Summing data of X and Y gives "<<o1.data1 + o2.data2;
}

int main(){
   X a;
   a.setValue(26);
   
   Y b;
   b.setValue(26);

   add(a,b);
   return 0;

   }