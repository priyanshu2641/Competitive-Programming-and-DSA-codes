#include<iostream>
using namespace std;

class Data{
    int data1;
    int data2;
    int data3;
    public:
    Data(int a,int b=4,int c=2001){
        data1=a;
        data2=b;
        data3=c;
        }

    void printdata();

    };

void Data :: printdata(){
    cout<<"The Date of Birth of Priyanshu and Vasudha is "<<data1<<"."<<data2<<"."<<data3<<"."<<endl;
}
int main(){
    Data dob(26);
    dob.printdata();
    return 0;

   } 