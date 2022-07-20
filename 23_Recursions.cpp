// #include<iostream>
// using namespace std;

// int factorial(int a){
//     if (a<2){
//         return 1;
//     }
//     return a*factorial(a-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the Number: ";
//     cin>>n;
//     cout<<"The factorial of "<<n<<" is "<<factorial(n);

//    return 0;

//    }


#include<iostream>
using namespace std;

int fibonacci(int a){
    if (a<2){
        return 1;
    }
    return fibonacci(a-1)+fibonacci(a-2);
}

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<"The value is "<<fibonacci(n);

   return 0;

   }