#include<iostream>
using namespace std;

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int arr[], int size){
    int temp;
    for (int i = 0; i < size-1; i++)
    {   
        cout<<"Working on pass number "<<i+1<<endl;
        int swapped= false;

        for (int j = 0; j <size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }       
}

int main(){
    int arr[]={12,54,65,7,23,9};
    // int arr[]={1,2,4,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    display(arr,size);
    cout<<endl;
    bubbleSort(arr,size);
    display(arr,size);

    return 0;
}