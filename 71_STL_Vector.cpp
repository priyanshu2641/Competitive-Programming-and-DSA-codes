#include<iostream>
#include<vector>

using namespace std;

template<class T>
void display(vector<T> &v){
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // Ways to create a vector
    // vector<int> vec1;           // zero length vector
    // vector<char> vec2(4);       // 4-element character vector
    // vector<char> vec3(vec2);    // 4-element character vector from vec2
    // display(vec1);
    // vec2.push_back('2');
    // display(vec2);
    // display(vec3);
    vector<int> vec;
    vec.push_back(1);         
    vec.push_back(2);         
    vec.push_back(3);         
    vec.push_back(4);         
    vec.push_back(5);         
    vec.push_back(6);     

    // One way  to print this vector is through Iterator
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";
    } 
    cout<<endl;

    // Another way
    

    vector<int> vec4(6,3);         // 6-element vector of 3s
    display(vec4);
    cout<<vec4.size();

    int element, size;
   
    
    return 0;

}