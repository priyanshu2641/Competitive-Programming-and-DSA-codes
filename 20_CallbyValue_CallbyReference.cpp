#include<iostream>

using namespace std;

void swap(int a,int b){                   // temp  a  b                            // This will not swap the value.
    int temp =a;                          //  4    4  5
    a = b;                                //  4    5  5
    b=temp;                               //  4    5  4
}


// Call by Reference using Pointers.
void swapPointer(int* a,int* b){           // temp  a  b                            
    int temp =*a;                          //  4    4  5
    *a = *b;                               //  4    5  5
    *b=temp;                               //  4    5  4
}

// Call by Reference using Reference Variables.
void swapReferenceVar(int &a,int &b){           // temp  a  b                            
    int temp =a;                                //  4    4  5
    a = b;                                      //  4    5  5
    b=temp;                                     //  4    5  4
}

int main(){
    int n1=4, n2=5;
    cout<<"The value of n1 is "<<n1<<" and the value of n2 is "<<n2<<endl;
    // swap(n1,n2);                                              //This will not swap the values.
    // swapPointer(&n1,&n2);                                        //This will swap the values.
    swapReferenceVar(n1,n2);                                        //This will swap the values.
    cout<<"Now, The value of n1 is "<<n1<<" and the value of n2 is "<<n2<<endl;

   return 0;

   }