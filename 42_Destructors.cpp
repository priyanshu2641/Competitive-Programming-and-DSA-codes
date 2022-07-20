#include<iostream>
using namespace std;

// Destructor never takes an argument nor takes a value.
int count = 0;
class num{
    public:
        num(){
            count++;
            cout<<"This is the time when my constructor is called for object Number "<<count<<endl;
        }

        ~num(){
            cout<<"This is the time when my destructor is called for object Number "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"Creating the First Object n1."<<endl;
    num n1;
    {   
        cout<<"Entering the Block."<<endl;
        cout<<"Creating 2 more objects."<<endl;
        num n2,n3;
        cout<<"Exiting the Block."<<endl;
    }

    cout<<"Back to main."<<endl;

    return 0;

   }

