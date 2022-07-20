//  Union is used for better Memory Management.


#include<iostream>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
};


int main(){
    union money by_Priyanshu;
    by_Priyanshu.rice=12;              // We can use only one at a time.

    cout<<"The rice give by Priyanshu for Money- "<<by_Priyanshu.rice;

   return 0;

   }
