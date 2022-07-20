#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    m["Priyanshu"]=3;
    m["Coder"]=18;
    m.insert({"Cricketer",11});

    // 1st Method
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // 2nd Method
    for(auto it=m.begin(); it!=m.end();it++){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }

    // Finding whether an element is present or not.
    if(m.find("Coder") != m.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    cout<<m.size()<<endl;
    m.erase("Cricketer");
    cout<<m.size()<<endl;
    m.erase(m.begin());                         // erases first element
    cout<<m.size()<<endl;

    // m.erase(m.begin(),m.end());                // erases all element
    
    if(m.count("Coder")>0){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    
return 0;
}