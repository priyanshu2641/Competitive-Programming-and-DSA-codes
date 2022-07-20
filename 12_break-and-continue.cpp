#include<iostream>

using namespace std;

int main(){
    for(int i=1;i<=26;i++)
    {
        if(i==10){
            break;
        }
        cout<<i<<endl;
    }

    for(int j=1;j<=4;j++)
    {
        if(j==3){
            continue;                          // It skipped 3.
        }
        cout<<j<<endl;
    }

   return 0;

   }
