#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<char> q;

    q.push('P');
    q.push('U');
    q.push('B');
    q.push('G');

    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();

    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
 
    cout<<q.empty();


return 0;
}
