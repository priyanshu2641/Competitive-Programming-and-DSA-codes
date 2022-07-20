#include<iostream>
#include<valarray>

using namespace std;

int cube(int n){
    return n*n*n;
}

int main(){
    float arr[] = {2.5,4.36,57.0,8.16};

    valarray<int> ar = {1,2,3};
    valarray<int> br = {4,2,6};
    valarray<int> cr(10);

    for(auto i : ar){
        cout<<i<<" ";
    }
    cout<<endl;

    valarray<bool> result = (ar==br);
    for(auto i : result){
        cout<<i<<" ";
    }
    cout<<endl;
    

    ar+=br;
    for(auto i : ar){
        cout<<i<<" ";
    }
    cout<<endl;


    for(auto i : cr){
        cout<<i<<" ";
    }
    cout<<endl;

    // Position, Number of Elements, Gapping between elements
    cr[slice(0,5,2)]=2;
    for(auto i : cr){
        cout<<i<<" ";
    }
    cout<<endl;

    // ***** Applying function on a Valarray ******************** 

    // ar= ar.apply(cube);
    // for(auto i : ar){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    return 0;


}