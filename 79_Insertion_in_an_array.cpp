#include<iostream>
using namespace std;

void display(int cgpa[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<cgpa[i]<<" ";
    }
    
}
int insert(int cgpa[], int size,int element, int capacity, int position)
{   if(size==capacity){
        return size;
        }
    int index=position-1;
    for(int i = size-1; i>=index ;i--){
            cgpa[i+1] = cgpa[i];
            cgpa[index]=element;
            return (size+1);
            }
}


int main(){

int cgpa[]={26,4,2001,183,254,94,8,12,2002,5,11,1988};
int size=12;
int element=82;
int capacity=20;
int position=7;
int insertion = insert(cgpa, size, element,capacity, position);
display(cgpa, size);
 
return 0;
}
