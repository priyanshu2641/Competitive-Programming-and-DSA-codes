#include<iostream>
using namespace std;

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int arr[], int size){
    int indexofMin, temp;
    for (int i = 0; i < size-1; i++)
    {   
        indexofMin = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[indexofMin])
            {
                indexofMin=j;
            }   
        }
        temp=arr[i];
        arr[i]=arr[indexofMin];
        arr[indexofMin]=temp;   
    }
           
}

int main(){
    int arr[]={12,54,65,7,23,9};
    // int arr[]={1,2,4,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    display(arr,size);
    cout<<endl;
    selectionSort(arr,size);
    display(arr,size);

    return 0;
}