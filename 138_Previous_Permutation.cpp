#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {3,1,2};
    // 1,2,3
    // 1,3,2
    // 2,1,3
    // 2,3,1
    // 3,1,2
    // 3,2,1

    do{
        for(auto x : arr){
            cout<<x<<" ";
            }
        cout<<endl;
    }
    while(prev_permutation(arr, arr+3));

    cout<<prev_permutation(arr, arr+3)<<endl;       // Tells whether next permutataion exists or not

    // Printing that next permutation
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;

}