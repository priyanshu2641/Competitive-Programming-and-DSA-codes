// Returns true if any element in range [first,last) is equal to val, false otherwise.

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> vec={1,1,2,2,2,4,7,10};
    int arr[]={2,3,5,7};

    // For Vector
    cout<<binary_search(vec.begin(), vec.end(), 3)<<endl;
    cout<<binary_search(vec.begin(), vec.end(), 4)<<endl;

    // For Array
    cout<<binary_search(arr, arr+4, 3)<<endl;
    cout<<binary_search(arr, arr+4, 4)<<endl;

    return 0;
}
