#include<iostream>
#include<vector>

using namespace std;

int main(){

    pair<int,int> p1;
    p1.first =2;
    p1.second =3;
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,int> p2(3,4);
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int,int> p3;
    p3= make_pair(5,6);
    cout<<p3.first<<" "<<p3.second<<endl;

    pair<int,int> p4;
    p4={7,8};

    cout<<p4.first<<" "<<p4.second<<endl;

    vector<pair<string,int> >  vec;

    for (int i = 0; i < 3; i++)
    {
        string str; 
        int age;
        cin>>str>>age;

        vec.push_back({str,age});
    }
    
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }

    for(auto i : vec){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
    
}