#include<iostream>
using namespace std;

class Employee{
    int iD;
    static int count;                           // It is a property of class.
    // static
    // int count;

    public:
        void setData(void){
            cout<<"Enter the ID: ";
            cin>>iD;
            count++;
        }
        void getData(void){
            cout<<"The ID of this employee is "<<iD<<" and this is Employee number "<<count<<endl;
        }
};

int Employee :: count=100;                           // Default value is 0.
int main(){
    Employee Priyanshu,Aayush,Rohan;
    // Priyanshu.iD= 1;                   // cannot do this as iD and count are private
    // Priyanshu.count= 1;                   // cannot do this as iD and count are private

    Priyanshu.setData();
    Priyanshu.getData();

    Aayush.setData();
    Aayush.getData();

    Rohan.setData();
    Rohan.getData();

   return 0;

   }