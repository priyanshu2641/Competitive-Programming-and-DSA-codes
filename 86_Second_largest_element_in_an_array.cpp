#include<iostream>
using namespace std;

// NAIVE APPROACH

// int getLargest(int cgpa[], int size){
//     int largest=0;                  // taking index of 1st element as 0.
//     for (int i = 1; i < size; i++)
//     {
//         if(cgpa[i]>cgpa[largest]){
//         largest = i;
//         }
//     }
//     return largest;
// }

// int secondLargest(int cgpa[], int size)
// {
//     int largest=getLargest(cgpa,size);
//     int result=-1;
//     for (int i = 0; i < size; i++)
//     {
//         if(cgpa[i]!=cgpa[largest]){
//             if(result==-1){
//                 result=i;
//             }
//             else if(cgpa[i]>cgpa[result]){
//                 result = i;
//             }
//         }
//     }
//     return result;
// }
    
// EFFICIENT APPROACH

int secondLargest(int cgpa[], int size){
    int result=-1,largest=0;
    for (int i = 0; i < size; i++)
    {
        if(cgpa[i]>cgpa[largest]){
            result=largest;
            largest=i;
        }
        else if(cgpa[i]!=cgpa[largest]){
            if(result==-1 || cgpa[i]>cgpa[largest]){
                result=i;
            }
        }
    }
    return result;
}
int main(){

int cgpa[]={26,4,2001,183,254,94,8,12,2002,5,11,1988};
int size=sizeof(cgpa)/sizeof(int);
cout<<secondLargest(cgpa, size);

return 0;
}
