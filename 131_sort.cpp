// Returns the number of elements in the range [first,last) that compare equal to value.
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// Comparator Function
bool comp(int a, int b){
    return a>b;
}

int main(){
    vector<int> vec={10,200,30,100,20,40,90,20};
    int arr[]={1,1,6,3,2,5,4};

    sort(vec.begin(),vec.end());
    stable_sort(vec.begin(),vec.end());
    // For descending order
    sort(vec.begin(),vec.end(),greater<int>());

    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    sort(arr,arr+7);
    stable_sort(arr,arr+7);

    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    vector<int> vec1 ={5,3,4,5,6,7,8,3,4};
    sort(vec1.begin(), vec1.end(), comp);

    for (int i = 0; i < vec1.size(); i++)
    {
        cout<<vec1.at(i)<<" ";
    }


    return 0;
}