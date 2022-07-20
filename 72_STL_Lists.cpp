#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1; // List of 0 length
    // list<int> list2(7);      // Empty list of size 7
    list1.push_back(5);
    list1.push_back(26);
    list1.push_back(4);
    list1.push_back(8);
    list1.push_back(12);
    list1.push_back(10);
    list1.push_back(17);
    list1.push_back(6);
    list1.push_back(9);

/*
    list<int> :: iterator iter;
    iter = list1.begin();
    cout<< *iter<<" ";
    iter++;
    cout<< *iter<<" ";
    iter++;
    cout<< *iter<<" ";
    iter++;
    cout<< *iter<<" ";   
    iter++;
    cout<< *iter<<" ";
*/
    display(list1);
    list1.pop_back();           // removes back element
    display(list1);
    list1.pop_front();          // removes front element
    display(list1);
    list1.remove(4);            // removes 4 from the list, if there are 2 '4's in a list, then it will remove both '4's.
    display(list1);
    list1.reverse();            // reverses list 1
    display(list1);

    list<int> list2(3);    //Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 254;
    iter++;
    *iter = 183;
    iter++;
    *iter = 94;
    iter++;
    display(list2);
    list2.sort();
    display(list2);

    list1.sort();
    cout<<"Sorted List 1 before Merging"<<endl;
    display(list1);
    cout<<"Sorted List 2 before Merging"<<endl;
    display(list2);
    list1.merge(list2);
    cout<<"List 1 after Merging with List 2"<<endl;
    display(list1);

    return 0;

}