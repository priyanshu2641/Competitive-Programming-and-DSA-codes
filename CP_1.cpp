
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))
#define pb push_back
#define endl "\n"
#define itt vector<int>::iterator
#define loop(n) for (int i = 0; i < n; i++)
#define loop1(a, b) for (int i = a; i < b; i++)
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;

using namespace std;

bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

void solve()
{
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        
        solve();
    }
    return 0;
}

// #include <bits/stdc++.h>
// #define ll long long
// #define ld long double
// #define max3(a,b,c) max(max((a),(b)),(c))
// #define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
// #define min3(a,b,c) min(min((a),(b)),(c))
// #define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
// #define pb push_back
// #define endl "\n"
// #define itt vector<int>:: iterator
// #define loop(n) for (int i = 0; i < n; i++)
// #define loop1(a,b) for (int i = a; i < b; i++)
// #define yes cout<<"Yes"<<endl;
// #define no cout<<"No"<<endl;

// using namespace std;

// bool isPowerOfTwo(ll n)
// {
//    if(n==0)
//    return false;

//    return (ceil(log2(n)) == floor(log2(n)));
// }

// int main(){

//     ios::sync_with_stdio(0);
//     cin.tie(NULL), cout.tie(NULL);

//     int t;
//     cin>>t;

//     while(t--)
//     {
//       int a;
//       cin>>a;
//       int arr[a];
//       for (int i = 0; i < a; i++)
//       {
//         cin>>arr[i];
//       }
//       cout<<arr[0]<<endl;

//     }
//     return 0;

// }
