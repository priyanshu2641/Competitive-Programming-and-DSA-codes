// Returns the number of elements in the range [first,last) for which the condition is true.
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool isOdd(int val){
    return val%2;
}

bool isEven(int val){
    return (val + 1)%2;
}

bool isPrime(int val){
    if(val<=1) return false;

    for (int i = 2; i*i <= val; i++)
    {
        if(val % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> vec={1,1,2,2,2,4,5,10,20,30,30,20,10,10,20};
    int arr[]={1,1,2,2,2,4,5};


    cout<<count_if(vec.begin(), vec.end(), isPrime)<<endl;

    cout<<count_if(arr, arr+7, isOdd)<<endl;

    return 0;
}