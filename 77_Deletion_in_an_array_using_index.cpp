#include<iostream>
using namespace std;

void display(int cgpa[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<cgpa[i]<<" ";
    }
    
}

void indexdeletion(int cgpa[], int size, int index)
{   
    for(int i = index; i<size-1 ;i++){
            cgpa[i] = cgpa[i+1];
            }
}


int main(){

int cgpa[]={26,4,2001,183,254,94,8,12,2002,5,11,1988};
int size=12;
int index=5;
display(cgpa,size);
cout<<endl;  
indexdeletion(cgpa, size, index);
size-=1;
display(cgpa, size);
 
return 0;
}
