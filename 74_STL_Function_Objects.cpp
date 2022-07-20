#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    // Function Objects(Functor): Function wrapped in a class so that it is available like an object.
    int arr[] =  {254,183,94,26,4,2001,2};
    // sort(arr, arr+7);      // sorts in ascending order.
    sort(arr, arr+7, greater<int>());        // Sorts in descending order.
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;

}