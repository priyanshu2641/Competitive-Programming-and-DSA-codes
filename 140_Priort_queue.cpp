#include<iostream>
#include<queue>

using namespace std;

int main(){

    priority_queue<int> pq;
    cout<<pq.empty()<<endl; // tells whetherv the priorty queue is empty or not.
    pq.push(50);
    pq.push(60);
    pq.push(30);

    cout<<pq.empty()<<endl; // tells whetherv the priorty queue is empty or not.
    cout<<"size = "<<pq.size()<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<" ";   // gives the largest element in the priorty queue
        pq.pop();
    }    

    cout<<endl;


    priority_queue<int, vector<int>, greater<int>> pc;
    cout<<pq.empty()<<endl; // tells whetherv the priorty queue is empty or not.
    pc.push(50);
    pc.push(60);
    pc.push(30);

    cout<<pc.empty()<<endl; // tells whetherv the priorty queue is empty or not.
    cout<<"size = "<<pc.size()<<endl;

    while(!pc.empty()){
        cout<<pc.top()<<" ";   // gives the largest element in the priorty queue
        pc.pop();
    }    

    return 0;
}