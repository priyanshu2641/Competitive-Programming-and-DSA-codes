#include <bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(NULL), cout.tie(NULL);
    
int m,n;
cin>>m>>n;
int arr[m][n];
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin>>arr[i][j];
    }
    
}

for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    
}

// Searching element in an array
int x;
cin>>x;

bool flag=false;
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (arr[i][j]==x)
        {
            cout<<i<<" "<<j<<endl;
            flag=true;
        }
        
    }
    
}

if(flag){
    cout<<"Element Found!"<<endl;
}


return 0;

}