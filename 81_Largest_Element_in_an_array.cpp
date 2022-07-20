#include<iostream>
using namespace std;

// NAIVE APPROACH

// int getLargest(int cgpa[], int size)
// {
//     for(int i = 0; i<size ;i++){
//           bool flag=true;
//             for(int j=0;j<size;j++){
//                 if(cgpa[j]>cgpa[i]){
//                     flag=false;
//                     break;
//                 }
//             }
//             if(flag==true){
//                 return i;
//             }
//     }
//         return -1;
      
// }

// EFFICIENT APPROACH

int getLargest(int cgpa[], int size){
    int res=0;                  // taking index of 1st element as 0.
    for (int i = 1; i < size; i++)
    {
        if(cgpa[i]>cgpa[res]){
        res = i;
        }
    }
    return res;
}
    
int main(){

int cgpa[]={26,4,2001,183,254,94,8,12,2002,5,11,1988};
int size=sizeof(cgpa)/sizeof(int);
cout<<getLargest(cgpa, size);

return 0;
}
