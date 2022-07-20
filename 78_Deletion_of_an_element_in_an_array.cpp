#include<iostream>
using namespace std;

void display(int cgpa[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<cgpa[i]<<" ";
    }
    
}

int searching(int cgpa[], int size, int element)
{   
    int i;
    for(int i =0; i<size ;i++){
        if(cgpa[i]==element){
                return i;
            }
        }
    return -1;        
}

void indexdeletion(int cgpa[], int size, int index)
{   
    for(int j = index; j<size-1 ;j++){
            cgpa[j] = cgpa[j+1];
            }
}

int main(){

int cgpa[]={26,4,2001,183,254,94,8,12,2002,5,11,1988};
int size=sizeof(cgpa)/sizeof(int);
int element=2002;
display(cgpa,size);
cout<<endl; 
int index=searching(cgpa,size,element); 
indexdeletion(cgpa, size, index);
size-=1;
display(cgpa, size);
 
return 0;
}
