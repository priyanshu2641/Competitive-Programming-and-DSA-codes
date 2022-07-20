#include<iostream>
using namespace std;

// This is a good example of Run Time Polymorphism.

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        }

};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying Base class variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;  // Even after pointing base class pointer to object of derived class, when
                                        // we will print the display function display function of base class will be executed.
    base_class_pointer->var_base = 26;
    // base_class_pointer->var_derived= 26;     will throw an error.
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 26;
    derived_class_pointer->display();

    return 0;

}