#include<iostream>
using namespace std;

class Base{
   int data1;  //private by default and is not inheritable.
   public:
      int data2;
      void setData();
      int getData1(); 
      int getData2(); 
};

void Base :: setData(void){
   data1 = 254;
   data2 = 183;
}

int Base :: getData1(){
   return data1;
}

int Base :: getData2(){
   return data2;
}

class Derived : Base{
   int data3;
   public:
      void process();
      void display();
};

void Derived :: process(){
    setData();
   data3 = data2 * getData1();
}

void Derived :: display(){
   cout<<"Virat Kohli's Highest Test Score is "<<getData1()<<endl;
   cout<<"Virat Kohli's Highest ODI Score is "<<data2<<endl;
   cout<<"Product of Virat Kohli's Highest Test Score and Highest ODI score is "<<data3<<endl;
}
int main(){
   Derived Virat;
//    Virat.setData();
   Virat.process();
   Virat.display();

   return 0;

}