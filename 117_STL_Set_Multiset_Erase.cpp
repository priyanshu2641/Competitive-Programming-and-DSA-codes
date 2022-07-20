#include<iostream>
#include<set>

using namespace std;

int main(){
    multiset<int> st;                

    for (int i = 10; i <=100; i+=10)
    {
        st.insert(i);
    }
    st.insert(50);
    
    // 1st Method
    auto it = st.begin();          // It is exactly same as set<int> iterator
    st.erase(it);

    for(int element : st){
        cout<<element<<" ";
    }
    cout<<endl;

    // 2nd Method  (It takes O[log(n)] time because it first uses find function to get to the iterator and then it executes erase.)
    st.erase(50);
    for(int element : st){
        cout<<element<<" ";
    }
    cout<<endl;

    // 3rd Method: Linear in the distance between strat and end.
    auto start = st.find(60);       // It is exactly same as set<int> iterator
    st.erase(start, st.end());
    for(int element : st){
        cout<<element<<" ";
    }
    cout<<endl;


    return 0;

}