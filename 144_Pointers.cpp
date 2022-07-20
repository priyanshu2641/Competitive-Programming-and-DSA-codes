#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int a=5;
    string b = "Hello World";
    int arr[]={26,4,2001};
    vector<int> vec ={5,2,1};
    char c= 'C';

    int *pa = &a;
    string *pb = &b;
    int *parr = arr;
    vector<int> *pvec = &vec;
    char *pc = &c;

    cout<<*pa<<endl;
    cout<<*pb<<endl;
    cout<<*parr<<endl;
    cout<<*pc<<endl;

    cout<<vec.size()<<endl;

    // When we use pointer, we can use arrow pointer.
    cout<<pvec->size()<<endl;

    return 0;
}