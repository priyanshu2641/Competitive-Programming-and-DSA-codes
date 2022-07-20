#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int maximum(int arr[], int size){
    int max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }  
    }
    return max;
}

void countSort(int arr[], int size){
    int max=maximum(arr,size);
    int count[max+1];
    for (int i = 0; i < max+1; i++)
    {
        count[i]=0;
    }
    for (int i = 0; i < size; i++){
        count[arr[i]]++;
    }
    for (int i = 1; i < max+1; i++)
    {
        count[i]=count[i-1]+count[i];
    }
    int output[size];
    for (int i = size-1; i >=0; i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i]=output[i];
    }
    
}

int main(){
    int arr[]={12,54,65,7,23,9};
    int size=sizeof(arr)/sizeof(int);
    display(arr,size);
    cout<<endl;
    countSort(arr, size);
    display(arr,size);

    return 0;
}

