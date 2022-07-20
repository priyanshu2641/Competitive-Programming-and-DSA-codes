// Returns an iterator to the first element in range [first,last) which is greater than value.
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> vec={1,1,2,2,2,4,7,10};
    int arr[]={2,3,5,7};

    // For Value(Vector)
    cout<<*upper_bound(vec.begin(), vec.end(), 2)<<endl;
    // For Index(Vector)
    cout<<upper_bound(vec.begin(), vec.end(), 2) - vec.begin()<<endl;

    // For Value(Array)
    cout<<*upper_bound(arr,arr+4,4)<<endl;
    // For Index(Array)
    cout<<upper_bound(arr,arr+4,4) - arr<<endl;



    return 0;
}