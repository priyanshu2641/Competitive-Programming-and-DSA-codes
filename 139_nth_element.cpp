// Reatranges the elements in such a way that the elemnts at the nth position is the element that would be in that position in a sorted sequence.

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {3,33,10,45,2,56,23,47};

    nth_element(arr,arr+3,arr+8);
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    

    return 0;

}