#include<iostream>
// #include<string>
using namespace std;

int main(){
    
    //----------  1  ------------
    // string a="priyanshulovescoding";
    // cout<<a.length()<<endl;
    // a= a+"and"+"cricket.";
    // cout<<a<<endl;
    // cout<<a.substr(9,4)<<endl;
    // cout<<a.find("ansh")<<endl;

    // ---------  2  --------------
    // string a ="priyanshu";
    // string b ="cricket";
    // if(a==b){
    //     cout<<"Same";
    // }
    // else if(a>b){
    //     cout<<"Greater";
    // }
    // else{
    //     cout<<"Smaller";
    // }
    
    // ----------  3  --------------

    string a;
    cout<<"Enter your name: ";
    getline(cin,a);
    cout<<"Your name is "<<a; 
    
    return 0;
}