#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    
    if (age>=25){
        cout<<endl<<"You can stand as a candidate in the Elections 2024."<<endl;
    }
    else if(age>=18 && age<25){
        cout<<"You can vote in the elctions 2024 but you cannnot stand a candidate."<<endl;
    }
    else if(age<0){
        cout<<"Enter a valid age."<<endl;
    }
    else{
        cout<<"You cannot stand as a candidate and neither vote.";
    }

    return 0;

    }