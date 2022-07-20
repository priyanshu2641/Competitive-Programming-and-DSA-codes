#include<iostream>
using namespace std;

float moneyRecieved(int currentmoney, float factor=1.04){
    return currentmoney*factor;
}

int main(){
    int currentmoney=10000;
    cout<<"If you have a amount of "<<currentmoney<<" Rs in your bank account, then you will have to get a total amount of "<<moneyRecieved(currentmoney)<<endl;
    cout<<"If you have a amount of "<<currentmoney<<" Rs in your bank account, then you will have to get a total amount of "<<moneyRecieved(currentmoney,1.2)<<endl;

   return 0;
   }