#include <bits/stdc++.h>

using namespace std;

// int Left_Shift(int n, int i){
//     cout<<n<<" << "<<i<<" = "<<(n << i)<<endl;
// }
// int Right_Shift(int n, int i){
//     cout<<n<<" >> "<<i<<" = "<<(n >> i)<<endl;
// }
int Left_Shift(int n, int i){
    return (n << i);
}
int Right_Shift(int n, int i){
    return (n >> i);
}


int main(){

    ios::sync_with_stdio(0); 
    cin.tie(NULL), cout.tie(NULL);

    int c=Left_Shift(5,4);
    cout<<c<<endl;
    int d=Right_Shift(100,5);
    cout<<d<<endl;
    

    return 0;

}