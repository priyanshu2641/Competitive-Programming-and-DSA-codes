#include<iostream>
using namespace std;

int main(){
   int a = 4;
   int* ptr = &a;
   *ptr = 2641;

   cout<<"The value of a is "<<*(ptr)<<endl;

   // new keyword
   int *p = new int(26);
   cout<<"The value at address p is "<< *(p)<<endl;

   int *arr = new int[4];
   arr[0] = 10;
   *(arr+1) = 20;
   arr[2] = 30;
   arr[3] = 40;

   // delete[] arr;
   cout<<"The value of arr[0] is "<<arr[0]<<endl;
   cout<<"The value of arr[1] is "<<arr[1]<<endl;
   cout<<"The value of arr[2] is "<<arr[2]<<endl;
   cout<<"The value of arr[3] is "<<arr[3]<<endl;

   return 0;

}