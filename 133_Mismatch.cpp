#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

int main(){
    int arr1[]={10,20,30,30,20,10,10,20};
    vector<int> vec1={10,20,30,30,20,10,10,20};

    pair<int*, vector<int> :: iterator> result1=mismatch(arr1,arr1+7, vec1.begin());
    if((arr1+7)==result1.first){
        cout<<"All Matched"<<endl;
    }
    if(result1.second== vec1.end()){
        cout<<"All Matched"<<endl;
    }

    int arr2[]={10,50,20,10,10,20};
    vector<int> vec2={10,20,20,10,10,20};

    pair<int*,vector<int> :: iterator> result2=mismatch(arr2,arr2+5, vec2.begin());
    cout<<*result2.first<<" "<<*result2.second; 


    return 0;
}