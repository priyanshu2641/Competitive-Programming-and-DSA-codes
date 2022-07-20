#include <bits/stdc++.h>

using namespace std;

bool isSubseq(string s1, string s2, int m, int n){
    int j=0;
    for (int i = 0; i < n && j<m; i++)
    {
        if(s1[j]==s2[i]){
            j++;
        }
    }
    return(j==m);
}

int main(){

    ios::sync_with_stdio(0); 
    cin.tie(NULL), cout.tie(NULL);
    
    string s1="BHy";
    string s2="ACGBHUIJK";

    int m = s1.length();
    int n = s2.length();

    if(isSubseq(s1, s2,m, n)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;

}