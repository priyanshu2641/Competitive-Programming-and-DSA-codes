#include<iostream>
#include<unordered_set>

using namespace std;


// Efficient Solution

// int countDistinct(int arr[], int n){
//     unordered_set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(arr[i]);
//     }
//     return s.size();
// }

// Best Approach

int countDistinct(int arr[], int n){
    unordered_set<int> s(arr,arr+n);
    return s.size();
}


int main(){
    int arr[]={1,2,3,2,3,1,4,5,6,5,7,9};
    int size= sizeof(arr)/sizeof(int);

    int count=countDistinct(arr,size);
    cout<<count<<endl;
}