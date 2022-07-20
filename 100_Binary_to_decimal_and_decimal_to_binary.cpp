#include <bits/stdc++.h>
using namespace std;

int main(){

    // ------------------BINARY TO DECIMAL--------------------------------------------------
    // int bn,dec=0,rem,i=0;
    // cout<<"Enter binary number: "<<endl;
    // cin>>bn;
    // while(bn!=0){
    //     rem=bn%10;
    //     dec=dec+(rem*pow(2,i));
    //     i++;
    //     bn=bn/10;
    // }
    // cout<<dec<<endl;

    // -------------------DECIMAL TO BINARY--------------------------------------------------
    int n,rem,i=0;
    int a[i];
    cout<<"Enter Decimal number: "<<endl;
    cin>>n;
    while (n)
    {
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
    }
    
    for (int j = i-1; j >= 0; j--)
    {
        cout<<a[j];
    }
    
    return 0;

}