#include<iostream>
#include<map>

using namespace std;

int main(){

    multimap<string , int> rank;
    
    // In a multimap, we can't simply access multimap elements using [] and .at() function. We need to use iterators.
    rank.insert({"alpha",1});
    rank.insert({"beta",2});
    rank.insert({"beta",3});

    for (auto it = rank.begin(); it != rank.end(); it++)
    {
        pair<string,int> a = *it;
        cout<<a.first<<" "<<a.second<<endl;
    }
    
    return 0;
}