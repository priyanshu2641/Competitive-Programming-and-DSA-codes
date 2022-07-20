#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arguments."<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments."<<endl;
    return a+b+c;
}
int main(){
    cout<<"The sum of 26 and 26 is "<<endl<<sum(26,26)<<endl;
    cout<<"The sum of 26,4 and 26 is "<<endl<<sum(26,4,26);

   return 0;

   }