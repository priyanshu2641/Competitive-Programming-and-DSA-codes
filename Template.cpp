#include <bits/stdc++.h>
#include <string>
#define ll long long
#define ld long double
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
#define pb push_back
#define endl "\n"
#define itt vector<int>:: iterator
#define loop(n) for (int i = 0; i < n; i++)
#define loop1(a,b) for (int i = a; i < b; i++)
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define minus cout<<"-1\n";
#define zero cout<<"0\n";
#define print(x) cout<<(x)<<endl;
#define ub upper_bound
#define lb lower_bound
#define bs binary_search

bool isprime(ll n){
    if (n == 2 or n == 3) return true;
    if (n % 2 == 0) return false;
    for (ll i = 3; i * i <= n; i += 2) if (n % i == 0) return false;
    return true;
}
int gcd(int a , int b){
    return gcd(a,b);
    }
int lcm(int a , int b){
    return (a/gcd(a,b))*b;
    }

// Binomial Coefficient
int C(int n, int k){
    int res = 1;
    if (k > n - k){
        k = n - k;
        }
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

// BINARY LEFT AND BINARY RIGHT SHIFT
int Left_Shift(int n, int i){
    return (n << i);
}
int Right_Shift(int n, int i){
    return (n >> i);
}

// Number of set bits
int set_bits(int n){
    int count=0;
    while(n>0){
        count++;
        n= n & (n-1);
    }
    return count;
}

using namespace std;

int main(){

    ios::sync_with_stdio(0); 
    cin.tie(NULL), cout.tie(NULL);
    
    int t;
    cin>>t;
        
    while(t--)
    {  
        
        
    }

    return 0;

}
