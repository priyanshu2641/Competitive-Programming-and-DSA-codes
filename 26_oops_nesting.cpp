#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void checkbinary(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the binary number: ";
    cin >> s;
}

void binary ::checkbinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Not a Binary Number." << endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment(void)
{   
    checkbinary();                                         // Nesting of function
    for (int i=0; i<s.length();i++)
    {
        if (s.at(i)== '0'){
            s.at(i)= '1';
        }
        else{
            s.at(i)= '0';
        }
    }
}

void binary :: display(void){
    
    for (int i=0; i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary number;
    number.read();
    // number.checkbinary();
    number.ones_compliment();
    number.display();

    return 0;
}