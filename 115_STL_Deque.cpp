// We can insert and delete from the beginning of the vector/array. So it work with O(1) time complexity for insert and delete the element from starting

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<string> d;

    d.push_back("My");
    d.push_back("name");
    d.push_back("is");
    d.push_back("Priyanshu");
    // d.pop_back();   

    d.push_front("Hello");              // inserts element at starting of the vector.
    cout<<d.front()<<" "<<d.back()<<endl;

    d.pop_front();                      // deletes the element from front
    cout<<d.front()<<" "<<d.back()<<endl;

    // Traversing the deque
    for (int i = 0; i <=d.size(); i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    
    // d.clear();                          // simply clears the whole deque.3

    d.insert(d.begin()+3,"Coder");
    for (int i = 0; i < d.size(); i++)
    {
        cout<<d.at(i)<<" ";             // it checks whether you are even inside the range or not. So, it doesn't run when i<=d.size().
    }
    cout<<endl;

    d.erase(d.begin(),d.begin()+3);
    for(auto i: d){
        cout<<i<<" ";
    }

    

}