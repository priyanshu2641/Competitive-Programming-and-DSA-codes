#include<iostream>
using namespace std;

void display(int cgpa[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<cgpa[i]<<" ";
    }   
}

int left_rotating_array_by_one(int cgpa[], int size)
{   
    int temp=cgpa[0];
    for (int i = 1; i < size; i++){
         cgpa[i-1]=cgpa[i];
    }
    cgpa[size-1]=temp;
    
}

int main(){

int cgpa[]={26,4,2001,183,254,94,8,12,2002,5,11,1988};
int size=sizeof(cgpa)/sizeof(int);
display(cgpa,size);
cout<<endl;
left_rotating_array_by_one(cgpa, size);
display(cgpa,size);
 
return 0;
}