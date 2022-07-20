#include<iostream>
#include<fstream>
#include<string>     // for string

using namespace std;

int main(){
    ofstream a;
    a.open("sample_4.txt");
    a<<"My name is Priyanshu.\n";
    a<<"I am a student in Chemical engineering at IIT Ropar.\n";
    a<<"I like to play Cricket\n";
    a.close();

    ifstream b;
    string st1, st2;
    b.open("sample_4.txt");
    // b>>st1>>st2;
    // cout<<st1<<" "<<st2;

    while(b.eof()==0){
        getline(b,st1);
        cout<<st1<<endl;
    }
    
    b.close();

    return 0;

}