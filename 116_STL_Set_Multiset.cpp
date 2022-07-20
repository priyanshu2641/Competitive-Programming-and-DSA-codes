#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> st;                // A set can only store unique values.
    // multiset<int> st;           A multiset is similar to set but it can store multiple values.

    int arr[]={10,20,30,40,50};

    st.insert(10);
    for (int element : st)
    {
        cout<<element<<" ";
    }
    cout<<endl;
    
    st.insert(arr,arr+5);
    // st.insert(v.begin(),v.end())                          FOR VECTORS
    for (int element : st)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    return 0;

}