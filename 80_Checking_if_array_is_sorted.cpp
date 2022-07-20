#include<iostream>
using namespace std;

// NAIVE APPROACH

// bool isSorted(int cgpa[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//             if(cgpa[j]<cgpa[i]){
//                 return false;
//             }
//         }  
//     }
//     return true;
// }

// Efficient Approach

bool isSorted(int cgpa[], int size)
{
    for(int i = 0; i<size ;i++){
        if(cgpa[i]<cgpa[i-1]){
                return false;
            }
    } 
    return true;
}

int main(){

int cgpa[]={26,4,2001,183,254,94,8,12,2002,5,11,1988};
int size=sizeof(cgpa)/sizeof(int);
cout<<isSorted(cgpa, size);
 
return 0;
}