#include<iostream>
using namespace std;

void display(int cgpa[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<cgpa[i]<<" ";
    }   
}

int reverse(int cgpa[], int size)
{   
    int low=0; 
    int high=size-1;
    while(low<high){
        int temp=cgpa[low];
        cgpa[low]=cgpa[high];
        cgpa[high]=temp;
        low++;
        high--;
    }  
}

int main(){

int cgpa[]={26,4,2001,183,254,94,8,12,2002,5,11,1988};
int size=sizeof(cgpa)/sizeof(int);
display(cgpa,size);
cout<<endl;
reverse(cgpa, size);
display(cgpa,size);
 
return 0;
}
