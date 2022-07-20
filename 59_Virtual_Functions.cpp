#include<iostream>
using namespace std;

// This is a good example of Run Time Polymorphism.

class BaseClass{
    public:
        int var_base=1;
        virtual void display(){
            cout<<"1 Displaying Base class variable var_base "<<var_base<<endl;
        }

};

class DerivedClass : public BaseClass{
    public:
        int var_derived=2;
        void display(){
            cout<<"2 Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"2 Displaying Base class variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();     // Even when we have pointed our base class pointer to object of derived class, 
                                       // when we will run the display function it will point to object of base class 
                                       // only(As seen in the previous code). So our goal is to overwrite this and print 
                                       // the display function of derived class only, this is the reason we use virtual functions.

    

    return 0;

}