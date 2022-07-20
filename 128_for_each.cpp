// Applies function fn to each of the elements in the range [first,last).
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void print(int val){
    cout<<val<<" ";
}

void square(int val){
    cout<<val*val<<" ";
}

int sum;
void add(int val){
    sum += val;
}

int main(){
    vector<int> vec={10,20,30,30,20,10,10,20};
    int arr[]={1,1,2,2,2,4,5};

    // counts for full vector
    for_each(vec.begin(), vec.end(), print);
    cout<<endl;
    for_each(vec.begin(), vec.begin()+5, square);
    cout<<endl;
    
    // counts for full array
    for_each(arr, arr+7, add);
    cout<<sum<<endl;
    


    return 0;
}