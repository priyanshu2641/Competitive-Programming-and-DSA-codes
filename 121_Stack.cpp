#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;

    s.push(26);
    s.push(5);
    s.push(4);
    s.push(11);

    cout<<s.size()<<endl;
    cout<<s.top()<<endl;

    s.pop();

    cout<<s.size()<<endl;
    cout<<s.top()<<endl;

    // One of the ways in which we can traverse a stack.
    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }


return 0;
}