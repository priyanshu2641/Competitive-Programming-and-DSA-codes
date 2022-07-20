#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct Student{
    int id;
    string name;
};

// for arranging in order of names
bool comp1(Student a, Student b){
    return a.name < b.name;
}


// for arranging in order of id's
// bool comp2(Student a, Student b){
//     return a.id < b.id;
// }


int main(){
    Student arr[5];
    
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i].id>>arr[i].name;
    
    }
    sort(arr, arr+5, comp1);
    // sort(arr, arr+5, comp2);

    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i].id<<"----->"<<arr[i].name<<endl;
    }
        
    
    

    return 0;
}