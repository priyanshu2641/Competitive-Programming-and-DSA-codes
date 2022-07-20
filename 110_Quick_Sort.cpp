#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int temp;
    int i=low+1,j=high;

    do{
        while(arr[i]<=pivot){
        i++;
        }
        while(arr[j]>pivot){
            j--;
        }
    
        if (i< j){
            swap(arr[i],arr[j]);
        }
    }while(i<j);

    swap(arr[low],arr[j]);
    return j;
    
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int partitionIndex=partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
        
    }
    
}

int main(){
    int arr[]={12,54,65,7,23,9};
    int size=sizeof(arr)/sizeof(int); 
    display(arr,size);
    cout<<endl;
    quickSort(arr, 0,size-1);
    display(arr,size);

    return 0;
}

