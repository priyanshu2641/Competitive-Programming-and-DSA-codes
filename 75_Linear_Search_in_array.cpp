#include<iostream>
using namespace std;

int search(int cgpa[], int size,int element)
{
    for(int i = 0; i<size ;i++){
        if(cgpa[i]==element){
                return i;
            }
    }
    return -1;
      
}

int main(){

int cgpa[]={26,4,2001,183,254,94,8,12,2002,5,11,1988};
int size=sizeof(cgpa)/sizeof(int);
cout<<size<<endl;
int element=8;
int index = search(cgpa, size, element);
cout<<"The index is "<<index<<".";
 
return 0;
}
