// Returns an iterator pointing to the element with the smallest and biggest value respectively in the range [first,last)

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> vec={10,20,30,30,20,10,10,20};
    int arr[]={1,1,2,2,2,4,5};

    cout<<*max_element(vec.begin(), vec.end())<<endl;
    cout<<*min_element(vec.begin(), vec.end())<<endl;
  

    
    cout<<*max_element(arr, arr+7)<<endl;
    cout<<*min_element(arr, arr+7)<<endl;



    return 0;
}