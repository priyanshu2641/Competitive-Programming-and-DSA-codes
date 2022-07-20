#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
    T * arr;
    int size;
        vector(int m){
            size = m;
            arr = new T[size];
        }
        T dotProduct(vector &v){
        T d = 0;
        for (int i=0; i<size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main(){
    // vector <int>v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=2;
    // v1.arr[2]=6;
    // vector <int>v2(3);
    // v2.arr[0]=2;
    // v2.arr[1]=6;
    // v2.arr[2]=4;
    // v1.dotProduct(v2);  
    
    // int answer1 = v1.dotProduct(v2);
    // cout<<answer1;
    
    vector <float>v1(3);
    v1.arr[0]=4.2;
    v1.arr[1]=2.6;
    v1.arr[2]=6.4;
    vector <float>v2(3);
    v2.arr[0]=2.4;
    v2.arr[1]=6.2;
    v2.arr[2]=4.6;
    v1.dotProduct(v2);
    
    float answer2 = v1.dotProduct(v2);
    cout<<answer2;
    return 0;

}