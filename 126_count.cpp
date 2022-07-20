// Returns the number of elements in the range [first,last) that compare equal to value.
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> vec={10,20,30,30,20,10,10,20};
    int arr[]={1,1,2,2,2,4,5};

    // counts for full vector
    cout<<count(vec.begin(), vec.end(), 20)<<endl;
    // counts for 1st 4 elements
    cout<<count(vec.begin(), vec.begin()+4, 20)<<endl;

    // counts for full array
    cout<<count(arr, arr+7, 2)<<endl;
    // counts for 1st 4 elements
    cout<<count(arr, arr+4, 2)<<endl;



    return 0;
}