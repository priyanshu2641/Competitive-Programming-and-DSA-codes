#include<iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator{
    public:

    int sumRealComplex(Complex , Complex);
    int sumCompComplex(Complex , Complex);
    
};

class Complex{
    int a,b;
    // Individually declaring function as friends
    friend int Calculator :: sumRealComplex(Complex o1,Complex o2);
    friend int Calculator :: sumCompComplex(Complex o1,Complex o2);
    // Aliter: Declaring entire calculator class as friend(in case we have many functions)
    friend class Calculator;
    public:
        void setNumber(int n1,int n2){
            a = n1;
            b = n2; 
        }
};

int Calculator :: sumRealComplex(Complex o1,Complex o2){
        return (o1.a +o2.a);
        }

int Calculator :: sumCompComplex(Complex o1,Complex o2){
        return (o1.b +o2.b);
        }

int main(){
    Complex o1, o2;
    o1.setNumber(26,4);
    o2.setNumber(12,8);
    Calculator calc;
    int res1 = calc.sumRealComplex(o1,o2);  
    cout<<"The sum of the Real part of o1 and o2 is "<<res1<<endl;
    int res2 = calc.sumCompComplex(o1,o2);  
    cout<<"The sum of the Complex part of o1 and o2 is "<<res2<<endl;
    return 0;
}