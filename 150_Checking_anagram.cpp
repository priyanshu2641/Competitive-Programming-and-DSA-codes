#include <bits/stdc++.h>

using namespace std;
const int CHAR  = 256;

bool areAnagram(string &s1, string &s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    int count[CHAR]={0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0; i < CHAR; i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){

    ios::sync_with_stdio(0); 
    cin.tie(NULL), cout.tie(NULL);
    
    string s1="AGHCBUJKI";
    string s2="ACGBHUIJK";

    int m = s1.length();
    int n = s2.length();

    if(areAnagram(s1, s2)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;

}