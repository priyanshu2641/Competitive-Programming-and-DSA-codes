#include<iostream>
#include<set>

using namespace std;

int main(){
    multiset<int> st;           

    for (int i = 10; i <=100; i+=10)
    {
        st.insert(i);
    }
    st.insert(20);
    st.insert(20);

    for(int element : st){
        cout<<element<<" ";
    }
    cout<<endl;

    auto it=st.find(20);         // It will return one of the value of 20.
    cout<<*it<<endl;


    //  For whole range
    pair< set<int> :: iterator, set<int>:: iterator > range = st.equal_range(20);
    cout<<*range.first<<" "<<*range.second<<endl;

    return 0;

}