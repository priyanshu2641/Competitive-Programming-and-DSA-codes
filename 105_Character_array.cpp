#include <bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(NULL), cout.tie(NULL);
    
// Declaration of character array
// char arr[n+1];        we add 1 because character array ends with a null character.

char arr[100]="priyanshu";
int i=0;

while(arr[i] != '\0'){
    cout<<arr[i]<<endl;
    i++;
}

return 0;

}