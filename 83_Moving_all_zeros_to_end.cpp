#include<iostream>
using namespace std;

void display(int cgpa[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<cgpa[i]<<" ";
    }   
}

// NAIVE APPROACH

void move_zeros_to_end(int cgpa[], int size){
    for (int i = 0; i < size; i++)
    {
        if(cgpa[i]==0){
            for (int j = i+1; j < size; j++)
            {
                if(cgpa[j]!=0){
                    swap(cgpa[i],cgpa[j]);
                }
            }       
        }
    }  
}

// EFFICIENT APPROACH

// void move_zeros_to_end(int cgpa[], int size){
//     int count=0;
//     for (int i = 0; i < size; i++)
//     {
//         if(cgpa[i]!=0){
//             swap(cgpa[i],cgpa[count]);
//             count++;
//         }
//     }
// }  

int main(){
    int cgpa[]={26,4,0,183,0,94,8,12,0,5,0,1988};
    int size=sizeof(cgpa)/sizeof(int);
    display(cgpa,size);
    cout<<endl;
    move_zeros_to_end(cgpa, size);
    display(cgpa,size);
 
return 0;

}