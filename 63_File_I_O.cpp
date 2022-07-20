#include<iostream>
#include<fstream>

using namespace std;

int main(){

    // WRITING TO A FILE---> connecting our file with a stream.
    ofstream a("sample_3.txt");
    string reply;

    // Creating a name string and fillin it with the string entered by the user.
    cout<<"Enter your name: ";
    cin>>reply;
    // Writing a string to the file.
    a<<reply<<" is my name.";
    a.close();

    ifstream b("sample_2.txt");
    string content_of_file;
    cout<<"The content of file is: ";
    getline(b, content_of_file);
    cout<<content_of_file;

   return 0;

}