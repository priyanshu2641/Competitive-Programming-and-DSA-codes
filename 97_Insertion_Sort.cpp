#include<iostream>
using namespace std;

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void insertionSort(int arr[], int size){
    for (int i = 1; i <= size-1; i++)
    {   
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
            {
              arr[j+1]=arr[j];
              j--;  
            }
        arr[j+1]=key;
    }
           
}

int main(){
    int arr[]={12,54,65,7,23,9};
    // int arr[]={1,2,4,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    display(arr,size);
    cout<<endl;
    insertionSort(arr,size);
    display(arr,size);

    return 0;
}