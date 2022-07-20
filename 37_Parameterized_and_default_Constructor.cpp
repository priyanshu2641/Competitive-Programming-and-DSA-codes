// #include<iostream>
// using namespace std;

// class Complex
// {
//     int a,b;
//     public:

//     Complex(int,int);          // Constructor Declaration.

//     void printNumber(){
//         cout<<"Your Number is "<<a<<" + "<<b<<"i.";
//     }

// };

// Complex :: Complex(int x,int y){                        // ------>  This is a parameterized constructor as it takes 2 parameters.
//     a= x;
//     b= y;
// }

// int main(){
//     // Implicit Call
//     Complex c(26,4);
//     c.printNumber();
//     cout<<endl;

//     // Explicit call
//     Complex a = Complex(11,5);
//     a.printNumber();

//    return 0;

//    }


#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int a, int b){
            x=a;
            y=b;
        }
 
        void displayPoint(){
            cout<<"The Point is ("<<x<<","<<y<<")"<<endl;
        }
};
int main(){
    Point P(26,4);
    P.displayPoint();
    return 0;

   }