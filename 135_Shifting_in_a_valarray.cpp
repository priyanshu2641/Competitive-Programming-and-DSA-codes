#include<iostream>
#include<valarray>

using namespace std;

int main(){
    float arr[] = {2.5,4.36,57.0,8.16};

    valarray<int> ar = {1,2,3};
    valarray<float> br(10);
    valarray<float> cr(arr,3);

    for(auto x : ar){
        cout<<x<<" ";
    }
    cout<<endl;


    // ****** Left shift ********
    ar = ar.shift(1);
    // 1 2 3 => 2 3 0
    for(auto x : ar){
        cout<<x<<" ";
    }
    cout<<endl;
    
    // ****** Right shift ********
    ar=ar.shift(-1);
    // 1 2 3 => 0 2 3 
    for(auto x : ar){
        cout<<x<<" ";
    }
    cout<<endl;


    for(auto x : cr){
        cout<<x<<" ";
    }
    cout<<endl;

    // ********** Circular Shift ********************
    cr = cr.cshift(1); 
    for(auto x : cr){
        cout<<x<<" ";
    }
    cout<<endl;

    


    return 0;


}