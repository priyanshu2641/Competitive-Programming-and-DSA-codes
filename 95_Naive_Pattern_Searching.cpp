#include<iostream>
#include<string>
using namespace std;

void patsearching(string &txt, string &pat){
    int m= pat.length();
    int n= txt.length();
    for(int i=0; i<=n-m; i++){
        int j;
        for (int j = 0; i < m; j++)
        {
            if (pat[j]!=txt[i+j])
            {
                break;
            }
            if(j==m){
                cout<<i<<" ";
            } 
        }        
    }
}

int main(){
    string txt="ABCABCD";
    string pat="ABCD";

    patsearching(txt,pat);

    return 0;

}