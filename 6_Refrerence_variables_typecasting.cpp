#include<iostream>

using namespace std;

int c=90;                                              // here we have taken a global variable.

int main(){
    // int a,b,c;
    // cout<<"Enter the first Number: ";
    // cin>>a;
    // cout<<"Enter the second Number: ";
    // cin>>b;
    // c=a-b;
    // cout<<"The difference between a and b is "<<c<<endl;
    // cout<<"The global variable is "<<::c;                       // We use this syntax " ::c " to print the global variable when a local variable is also present.

    float d=26.4f;           
    long double e=26.4l;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    cout<<"The size of 26.4 is "<<sizeof(26.4)<<endl;                     // It takes it to be a double. 
    cout<<"The size of 26.4f is "<<sizeof(26.4f)<<endl;
    cout<<"The size of 26.4F is "<<sizeof(26.4F)<<endl;
    cout<<"The size of 26.4l is "<<sizeof(26.4l)<<endl;
    cout<<"The size of 26.4L is "<<sizeof(26.4L)<<endl;

// ****************************** Reference Variables ********************************************

    // Virat ---> Kohli ---> Cheeku ---> King Kohli ---> Chase Master
    
    float p=5;
    float &q=p;
    cout<<p<<endl;
    cout<<q<<endl;

// ******************************* Typecasting *********************************************

    float  x= 2001.4;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of x is "<<(int)x<<endl;
    cout<<"The value of x is "<<int(x)<<endl;
    int y = int(x);
    cout<<"The value of y "<<y;

    return 0;
}