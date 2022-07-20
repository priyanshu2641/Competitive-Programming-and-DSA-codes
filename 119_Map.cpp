#include<iostream>
#include<map>

using namespace std;

int main(){

    map<string , int> rank;
    
    rank["alpha"]=1;
    rank["beta"]=2;

    cout<<rank.at("alpha")<<"---> map.size = "<<rank.size()<<endl;
    cout<<rank["beta"]<<"---> map.size = "<<rank.size()<<endl;

    // Better method is .at() as we can see in the below examples that even when "gamma" is not present in the ranklist, it 
    // provides its index as 0 an increases map size.
    cout<<rank["gamma"]<<endl;
    cout<<"map.size = "<<rank.size()<<endl;

    // Find Function
    if(rank.find("beta") == rank.end()){
        cout<<"Key not Found"<<endl;
    }
    else{
        cout<<"Key Found"<<endl;
    }

    // Insert Function
    rank.insert({"delta",4});
    cout<<rank["delta"]<<endl;

    // Value can be overwritten in case of a map
    rank["beta"]=5;
    cout<<rank["beta"];






    return 0;
}