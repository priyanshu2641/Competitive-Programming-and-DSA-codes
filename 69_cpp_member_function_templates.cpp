#include<iostream>
using namespace std;

template <class T>
class Priyanshu{
    public:
        T data;
        Priyanshu(T a){
            data = a;
        }
        void display();
};

template <class T>
void Priyanshu<T> :: display(){
    cout<<data;
}

int main(){
    // Priyanshu<float> p(7.0);
    // Priyanshu<char> p('P');
    // Priyanshu<int> p(26);
    // cout<<p.data<<endl;
    // p.display();

    return 0;

}