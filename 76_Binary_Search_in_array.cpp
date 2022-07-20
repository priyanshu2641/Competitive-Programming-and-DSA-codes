#include<iostream>
using namespace std;

// Iterative Approach

int binarysearch(int cgpa[], int size,int element)
{   
    int low=0, high=size-1;
    while(low<=high){
        int mid=(high+low)/2;
        if(cgpa[mid]==element){
                return mid;
            }
        else if(cgpa[mid]>element){
            high=mid-1;
            }
        else{
            low=mid+1;
        }
    }
    return -1;  
}

// Recursive Approach

// int binarysearch(int cgpa[],int high,int low,int element){
    
//     int mid=(low+high)/2;
//     if(cgpa[mid]==element){
//         return mid;
//     }
//     else if(cgpa[mid]>element){
//         return binarysearch(cgpa,low,mid-1,element);
//     }
//     else if(cgpa[mid]<element){
//         return binarysearch(cgpa,mid+1,high,element);
//     }

// }

int main(){

int cgpa[]={4,5,8,11,12,26,94,183,254,1988,2001,2002};
int size=sizeof(cgpa)/sizeof(int);
int element=254;
int index = binarysearch(cgpa,size, element);
cout<<"The index is "<<index<<".";
 
return 0;
}