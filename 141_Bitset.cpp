#include<iostream>
#include<bitset>

using namespace std;

int main(){

    bitset<10> bs_a;
    cout<<bs_a<<endl;

    bitset<10> bs_b(5);
    cout<<bs_b<<endl;

    bitset<10> bs_c("101011");
    cout<<bs_c<<endl;
    cout<<bs_c[0]<<endl;

    bs_a.set();
    cout<<bs_a<<endl;

    // Position, Value
    bs_a.set(4,0);
    cout<<bs_a<<endl;

    bs_a.reset();
    cout<<bs_a<<endl;

    bs_c.flip(2);
    cout<<bs_c<<endl;



    return 0;
}
