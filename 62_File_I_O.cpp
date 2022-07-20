#include<iostream>
#include<fstream>
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
2. ofstream --> derived from fstreambase
*/

/*
In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1. Using the Constructor
2. Using the member function open() of the class.
*/


using namespace std;

int main(){
   // string a = "You have to become a 4 star coder by the end of June 2022.";
   string b;
   // Opening files using constructor and writing it.
   // ofstream w("sample_1.txt");  // Write Operation
   // w<<a;

   // Opening files using constructor and reading from it.
   ifstream r("sample_2.txt");     //Read Operation
   // r>>b;          // Prints only one word.
   getline(r, b);
   getline(r, b);
   cout<<b;

   return 0;

}