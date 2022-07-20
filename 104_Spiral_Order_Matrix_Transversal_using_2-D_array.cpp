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

// Spiral Order Print

int row_start=0, row_end=m-1, column_start=0, column_end=n-1;

while (row_start <= row_end && column_start<=column_end)
{
    // for row start
    for (int col = column_start; col <= column_end; col++)
    {
        cout<<arr[row_start][col]<<" ";
    }
    row_start++;

    //  for column_end
    for (int row = 0; row < row_end; row++)
    {
        cout<<arr[row][column_end]<<" ";
    }
    column_end--;

    // for row end
    for (int col = column_end; col >= column_start; col--)
    {
        cout<<arr[row_end][col]<<" ";
    }
    row_end--;

    // for column_start
    for (int row = row_end; row >= row_start; row--)
    {
        cout<<arr[row][column_start]<<" ";
    }
    column_start++;  
}

return 0;

}