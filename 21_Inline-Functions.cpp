#include<iostream>
using namespace std;

// inline int product(int a,int b){                        //don't use in case of large functions, static variables and during recursion 
   // return a*b;
// }

int calc(int a,int b){
   static int c=0;        // This executes only once.
   c=c+1;                 //Next time this function is run, the value of c will be retained.
   return a*b+c;
}

int main(){
   int a,b;
   cout<<"Enter the value of a and b: ";
   cin>>a>>b;
   cout<<"The calculation is "<<calc(a,b)<<endl;
   cout<<"The calculation is "<<calc(a,b)<<endl;
   cout<<"The calculation is "<<calc(a,b)<<endl;
   cout<<"The calculation is "<<calc(a,b)<<endl;
   cout<<"The calculation is "<<calc(a,b)<<endl;
   cout<<"The calculation is "<<calc(a,b)<<endl;
   cout<<"The calculation is "<<calc(a,b)<<endl;

   return 0;

   }
   