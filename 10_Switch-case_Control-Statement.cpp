#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You are 18. You have become an adult now."<<endl;
        break;
    case 25:
        cout<<"You are 25. You must be a Graduate."<<endl;
        break;
    case 60:
        cout<<"You are 60. You should retire now."<<endl;
        break;
    default:
        cout<<"No special cases."<<endl;
        break;
    }
    return 0;

    }