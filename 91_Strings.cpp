#include<iostream>
#include<string>
using namespace std;

int main(){
    string a="priyanshulovescoding";
    int count[26]={0};
    for (int i = 0; i < a.length(); i++)
    {
        count [a[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i]>0)
        {
            cout<<(char)(i+'a')<<"-"<<count[i]<<endl;
        }  
    }
    
    return 0;
}