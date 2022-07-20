#include<iostream>
using namespace std;

// Naive Approach

// int firstOccurence(int cgpa[], int size, int element){
//     for (int i = 0; i < size; i++)
//     {
//         if(cgpa[i]==element){
//             return i;
//         }
//     }
// return -1;   
// }

// Efficient Approach

int firstOccurence(int cgpa[], int size, int element){
    int low=0, high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(cgpa[mid]>element){
            high=mid-1;
        }
        else if(cgpa[mid]<element){
            low=mid+1;
        }
        else{
            if(mid==0 || cgpa[mid-1]!=cgpa[mid]){
                return mid;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}


int main(){
    int cgpa[]={4,5,8,8,8,11,12,26,1988,2001,2002};
    int size= sizeof(cgpa)/sizeof(int);
    int element=8;
    int index = firstOccurence(cgpa,size, element);
    cout<<"The index is "<<index<<".";
 
    return 0;

}