#include<iostream>
#include<string>
using namespace std;

// bool isPal(string &a){
//         string rev=a;
//         reverse(rev.begin(),rev.end());
//         return(rev==a);
//     }

bool isPal(string &a){
        int begin=0;
        int end=a.length()-1;
        while (begin<end)
        {
          if (a[begin]!=a[end])
          {
              return false;
          }
          begin++;
          end--;
        }
    return true;
}     

int main(){
    string a="priyanshulovescoding";
    // string a="abcba";
    isPal(a);
    if(isPal(a)==true){
        cout<<"1";
    }    
    else{
        cout<<"0";
    }
return 0;
}
