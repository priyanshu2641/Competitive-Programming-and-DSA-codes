#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(26);
    s.insert(4);
    s.insert(2001);
    s.insert(183);

    // This is one of the way in which we print the elements of a set. 

    // for(int i : s){
    //     cout<<i<<" ";
    // }

    // Another way to print the elements of an unordered set.
    for (auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    // s.size() gives the size of the unordered set.
    cout<<s.size()<<endl;  

    // s.clear() clears the whole set.

    // s.clear();
    // cout<<s.size()<<endl;

    if(s.find(26)==s.end()){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found"<<" "<<*s.find(26)<<endl;
    }

    // s.count returns "1" when the element is present and it returns 0 vice-versa.
    cout<<s.count(183)<<endl;;

    // s.erase() removes element from the set.
    cout<<s.size()<<endl;
    s.erase(4);
    cout<<s.size()<<endl;
    auto iter=s.find(2001);
    s.erase(iter);
    cout<<s.size()<<endl;

    // Removes every element
    s.erase(s.begin(),s.end());
    cout<<s.size()<<endl;


    return 0; 
}