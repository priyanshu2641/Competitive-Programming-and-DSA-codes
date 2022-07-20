#include<iostream>
#include<string>
#include<map>

using namespace std;

//Map is an associative array
int main(){
    map<string,float> CgpaMap;
    CgpaMap["Priyanshu"]=7.0;
    CgpaMap["Aayush"]=7.1;
    CgpaMap["Neeraj"]=7.2;

    CgpaMap.insert({{"Shashank",6.9} , {"Rohan",7.3}});
    map<string, float> :: iterator iter;
    for(iter=CgpaMap.begin();iter!= CgpaMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is: "<<CgpaMap.size()<<endl;                    // gives size of Map
    cout<<"The max size is: "<<CgpaMap.max_size()<<endl;            // gives maximum size of Map
    cout<<"The empty return value is: "<<CgpaMap.empty()<<endl;     // tells whether map is empty or not

    return 0;

}