#include<iostream>
#include<unordered_map>
using namespace std;

int countFrequency(int arr[],int n){
    unordered_map<int,int> h;
    for (int i = 0; i < n; i++)
    {
        h[arr[i]]++;
    }
    for (auto e : h)
    {
        cout<<e.first<<" "<<e.second<<endl;
    }
}

int main(){
    int arr[]={1,2,3,2,3,1,4,5,6,5,7,9};
    int size= sizeof(arr)/sizeof(int);

    countFrequency(arr,size);

    return 0;
}