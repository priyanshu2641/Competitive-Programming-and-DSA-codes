#include <bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(NULL), cout.tie(NULL);

int n;
cout<<"Enter the size of your array: ";
cin>>n; 
char arr[n+1];
cin>>arr;

bool check=1;   // We assume that word is a Palindrome

for (int i = 0; i < n; i++)
{
    if (arr[i] != arr[n-1+i])
    {
        check=0;
        break;
    }
}

if (check==true){
    cout<<"Word is a Palindrome"<<endl;
}
else{
    cout<<"Word is not a Palindrome"<<endl;
}

return 0;

}