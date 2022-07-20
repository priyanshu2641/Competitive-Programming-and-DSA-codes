#include<iostream>
using namespace std;

// Naive Approach

// int sqRootFloor(int number){
//     int i=1;
//     while (i*i<=number)
//     {
//         i++;    
//     }
//     return(i-1);
// }

// Efficient Approach

int sqRootFloor(int number){
    int low=1, high=number,answer=-1;
     while(low<=high){
        int mid=(low+high)/2;
        int mSquare= mid*mid;
        if(mSquare==number){
            return mid;
        }
        else if(mSquare>number){
            high=mid-1;
        }
        else{
             low=mid+1;
             answer=mid;   
            }
        }
    return answer;
}
    

int main(){
    int Square_Root =sqRootFloor(8);
    cout<<"The Square Root of given number is "<<Square_Root<<endl;

    return 0;
}