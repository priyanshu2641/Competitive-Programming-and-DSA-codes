#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int iD;
    float salary;

    Employee(int inpiD)
    {
        iD = inpiD;
        salary = 100.0;
    }
    Employee(){}
};

/* Derived Class Syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc.
}

Notes:
1. Default Visibility mode is private.
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived classs.
3. Private Visibility Mode: Public Members of the base class becomes Private members of the derived class.
4. Private members are never inherited.

*/

// Derived Class
class Programmer : Employee
{
public:
    Programmer(int inpiD)
    {
        iD = inpiD;
    }
    int languagecode = 4;
    void getData(){
        cout<<iD<<endl;
    }
};

int main()
{
    Employee Priyanshu(1), Vasudha(2);
    cout << Priyanshu.iD << endl;
    cout << Priyanshu.salary << endl;
    cout << Vasudha.iD << endl;
    cout << Vasudha.salary << endl;
    Programmer Virat(5);
    cout<< Virat.languagecode<<endl;
    // cout<<Virat.iD<<endl;   //This will not print the iD as visibility mode is private(as we have not specified the visbility mode.)
    Virat.getData();   

    return 0;
}
