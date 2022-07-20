#include<iostream>
using namespace std;

void display(int A[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }
}

void Merge(int A[], int mid, int low, int high){
    int i,j,k;
    int B[100];
    i=low;
    j=mid+1;
    k=low;
    while (i<=mid && j<=high)
    {
        if (A[i]<A[j])
        {
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++;
        }  
    }
    while (i<=mid)
    {
     B[k]=A[i];
     k++;
     i++;
    }
    while (j<=high)
    {
     B[k]=A[j];
     k++;
     j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i]=B[i];
    }  
}

void mergeSort(int A[], int low, int high){
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergeSort(A, low, mid);
        mergeSort(A,mid+1, high);
        Merge(A, mid,low,high);
    }
    
}

int main(){
    int A[]={12,54,65,7,23,9};
    // int arr[]={1,2,4,6,7,8,9};
    int size=sizeof(A)/sizeof(int);
    display(A,size);
    cout<<endl;
    mergeSort(A, 0 ,size-1);
    display(A,size);

    return 0;
}

