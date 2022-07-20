#include<iostream>
#include<valarray>

using namespace std;

int main(){
    float arr[] = {2.5,4.36,57.0,8.16};

    valarray<int> ar = {1,2,3};
    valarray<float> br(10);
    // copies first 3 elements from arr to cr
    valarray<float> cr(arr,3);

    for(auto i : ar){
        cout<<i<<" ";
    }
    cout<<endl;

    for(auto i : br){
        cout<<i<<" ";
    }
    cout<<endl;

    for(auto i : cr){
        cout<<i<<" ";
    }
    cout<<endl;

// Swapping 

    // cout<<"************************ Swapped ****************************"<<endl;
    // br.swap(cr);
    // for(auto i : br){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // for(auto i : cr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    cout<<"Sum = "<<ar.sum()<<endl;
    cout<<"Sum = "<<br.sum()<<endl;
    cout<<"Sum = "<<cr.sum()<<endl;

    cout<<"ar min = "<<ar.min()<<" ar max "<<ar.max()<<endl;
    cout<<"cr min = "<<cr.min()<<" cr max "<<cr.max()<<endl;


    return 0;


}