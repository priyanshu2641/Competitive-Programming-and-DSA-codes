#include<iostream>
using namespace std;

/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS (ONE, TWO OR MORE THAN TWO)
template<class T1, class T2.....(COMA SEPARATED)>
class nameofClass{
    // body
}
*/

template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2;
        }
};

int main(){
    myClass<float, int> obj(26.4 , 2001);
    obj.display();
   return 0;

}