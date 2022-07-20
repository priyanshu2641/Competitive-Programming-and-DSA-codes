#include <bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(NULL), cout.tie(NULL);
    
int n;
cin>>n; 
cin.ignore();
char arr[n+1];

cin.getline(arr,n);
cin.ignore();

int i=0;
int currentLength=0, maxLength=0;
int Start=0, maxStart=0;

while(1){
    if(arr[i]==' ' || arr[i]=='\0'){
        if (currentLength>maxLength)
        {
            maxLength=currentLength;
            maxStart=Start;
        }
        currentLength=0;
        Start=i+1;
    }

    else{
        currentLength++;
    }
    
    if(arr[i]=='\0'){
        break;
    }
    i++;

}

cout<<maxLength<<endl;
for (int i = 0; i < maxLength; i++)
{
    cout<<arr[i+maxStart];
}



return 0;

}