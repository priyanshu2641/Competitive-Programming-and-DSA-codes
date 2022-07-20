#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int isPrime=1;
    if (num<2)
    {
        cout<<"Not Prime"<<endl;
    }
    else{
        for (int i = 2; i*i< num; i++)
        {
            if (num%i==0)
            {
                isPrime=0;
            }  
        }
        if(isPrime){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not Prime"<<endl;
        }
    }
    return 0;

}