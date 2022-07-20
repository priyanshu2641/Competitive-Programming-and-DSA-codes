#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;       // zero length vector
    int element, size;
    cout<<"Enter the size of your vector: "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);           // adds element to the vector
    }
    display(vec1);

    vec1.pop_back();                       // removes the last element
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();   // vec.1begin() makes the iterator to point to the 1st element of vec1
    // vec1.insert(iter, 2642001);
    vec1.insert(iter+1,3, 2642001);            // adds 3 copies of 2642001 
    display(vec1);


    // Reverse Iterator
    vector<int> :: reverse_iterator it;
    for(it = vec1.rbegin(); it != vec1.rend(); it++){
        cout<<*it<<" ";
    }
    
    return 0;

}