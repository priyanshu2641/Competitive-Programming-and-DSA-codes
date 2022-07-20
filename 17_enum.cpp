#include<iostream>

using namespace std;

int main(){
    enum Interests{cricket,coding,astronomy,sneakers};
    cout<<cricket<<endl;
    cout<<coding<<endl;
    cout<<astronomy<<endl;
    cout<<sneakers<<endl;
    Interests I1 =cricket;
    cout<<I1;
    cout<<endl<<(I1==sneakers);                          // will print 0(false) because we have defined I1 as cricket.

   return 0;

   }
