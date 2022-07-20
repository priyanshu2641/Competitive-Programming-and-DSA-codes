#include <bits/stdc++.h>

using namespace std;
const int CHAR  = 256;

int nonRep(string &str){
    int fI[CHAR];
    fill(fI,fI+CHAR,-1);
    for (int i = 0; i <str.length() ; i++)
    {
        if(fI[str[i]]== -1){
            fI[str[i]]=i;
        }
        else{
            fI[str[i]] = -2;
        }
    }
    int res = INT_MAX;
    for (int i = 0; i < CHAR; i++)
    {
        if(fI[i]>=0){
            res = min(res,fI[i]);
        }
    }
    
    if(res==INT_MAX){
        cout<<"-1"<<endl;
    }            
    else{
        cout<<res<<endl;
    }
    
    
}

int main(){

    ios::sync_with_stdio(0); 
    cin.tie(NULL), cout.tie(NULL);
    
    string str="bccabde";

    int x = nonRep(str);
    cout<<x<<endl;


    return 0;

}