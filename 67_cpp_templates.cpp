#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class Priyanshu{
    public:
        T1 a;
        T2 b;
        T3 c;
        Priyanshu(T1 x, T2 y, T2 z){
            a=x;
            b=y;
            c=z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};

int main(){
    Priyanshu<> p(2001, 26.4, 'p');
    p.display();

    Priyanshu<char, float, int> c('p', 26.4, 2001);
    c.display();

    return 0;

}