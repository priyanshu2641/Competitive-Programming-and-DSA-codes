#include<iostream>

using namespace std;

typedef struct employee                 // We use typedef here which simply means we can write "emp" instead of "struct employee".
{
    int eID;
    char favChar;
    float salary;

}emp;



int main(){
    emp Priyanshu;
    emp Aayush;
    emp Rohan;
    Priyanshu.eID=1049;
    Priyanshu.favChar='V';
    Priyanshu.salary=150000;
    Aayush.salary=120000;
    Aayush.eID=1036;
    Aayush.favChar='C';
    Rohan.eID=1052;
    Rohan.favChar='T';
    Rohan.salary=130000;

    cout<<"The value is "<<Priyanshu.salary<<endl;
    cout<<"The value is "<<Rohan.favChar<<endl;
    cout<<"The value is "<<Aayush.eID<<endl; 
    cout<<"The value is "<<Priyanshu.eID<<endl; 


   return 0;

   }
