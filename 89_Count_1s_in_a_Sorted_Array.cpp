#include<iostream>
using namespace std;

int countOnes(int numbers[], int size){
    int low=0, high=size-1;
     while(low<=high){
        int mid=(low+high)/2;
        if(numbers[mid]==0){
            low=mid+1;
        }
        else{
            if(mid==0 || numbers[mid-1]==0){
                return (size-mid);
            }
            else{
                high=mid-1;
            }
        }
    }
    return 0;
}
    

int main(){
    int numbers[]={0,0,0,0,1,1,1,1,1,1};
    int size=sizeof(numbers)/sizeof(int);
    int number_of_1 =countOnes(numbers,size);
    cout<<"The total number of 1s present in the array are "<<number_of_1<<endl;

    return 0;
}