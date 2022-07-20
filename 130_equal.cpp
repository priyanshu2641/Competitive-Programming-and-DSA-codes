// Compares the elements in the range[first of 1, last of 1) with those in the range beginning at the first of 2, an returns 
// true if all of the elemnts in both ranges match.

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> vec1={10,20,30,30,20,10,10,20};
    int arr1[]={10,20,30,30,20,10,10,20};

    cout<<equal(vec1.begin(), vec1.end(), arr1)<<endl;
    // Comapres for 1st 5 elements
    cout<<equal(vec1.begin(), vec1.begin()+5, arr1)<<endl;

    vector<int> vec2={10,20,30,30,20,10,10,20};
    int arr2[]={10,20,20,10,10,20};

    cout<<equal(vec2.begin(), vec2.end(), arr2)<<endl;
    // Comapres for 1st 5 elements
    cout<<equal(vec2.begin(), vec2.begin()+5, arr2)<<endl;



    return 0;
}