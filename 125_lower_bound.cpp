// Returns an iterator to the first element in range [first,last) than is equal to greater than itself.
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> vec={1,1,2,2,2,4,7,10};
    int arr[]={2,3,5,7};

    // For Value(Vector)
    cout<<*lower_bound(vec.begin(), vec.end(), 4)<<endl;
    cout<<*lower_bound(vec.begin(), vec.end(), 3)<<endl;
    cout<<*lower_bound(vec.begin(), vec.end(), 2)<<endl;
    // For Index(Vector)
    cout<<lower_bound(vec.begin(), vec.end(), 4) - vec.begin()<<endl;
    cout<<lower_bound(vec.begin(), vec.end(), 3) - vec.begin()<<endl;
    cout<<lower_bound(vec.begin(), vec.end(), 2) - vec.begin()<<endl;

    // For Value(Array)
    cout<<*lower_bound(arr,arr+4,4)<<endl;
    // For Index(Array)
    cout<<lower_bound(arr,arr+4,4) - arr<<endl;



    return 0;
}