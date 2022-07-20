#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){

    // 1st Method of Declaring a string
    string str;
    str="ABCDEFGH";
    cout<<str<<endl;

    // 2nd Method of Declaring a string
    string a(9,'P');
    cout<<a<<endl;


    // Appending in a string(1st way)
    string s1="Coder";
    string s2="Priyanshu";

    string output1=s1.append(s2);
    cout<<output1<<endl;

    // Appendng in a string(2nd way)
    string s3="Coder";
    string s4="Priyanshu";

    cout<<s3+s4<<endl;

    // Accessing the character of a string with the help of index
    string b="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<b[8]<<endl;
    cout<<b<<endl;

    // Clearing a string
    b.clear();
    cout<<b<<endl;

    if (b.empty())
    {
        cout<<"String is empty"<<endl;
    }
    
    // Comparing 2 strings
    string s5="abc";
    string s6="pqr";

    cout<<s6.compare(s5)<<endl;

    // Erasing 
    string s7 ="nincompoop";
    cout<<s7.erase(3,3)<<endl;

    // Find Function
    string s8 ="nincompoop";
    cout<<s8.find("poo")<<endl;

    // Insert Function
    cout<<s8.insert(6,"plan")<<endl;

    // String to Integer Function
    string s9 ="26042001";
    int x = stoi(s9);
    cout<<x<<endl; 

    // Integer to String Function
    int y = 2604;
    cout<< to_string(y)+"2001"<<endl;

    // Sorting a string
    string s10="ybqiujijdbfvhbjweieWHRU";
    sort(s10.begin(),s10.end());
    cout<<s10<<endl;

    // Convert to lower Case
    string s11="ABCDEFGHIJKL";
    for (int i = 0; i < s11.size(); i++)
    {
        if (s11[i]>='A' && s11[i]<='Z')
        {
            s11[i] += 32;
        }   
    }
    cout<<s11<<endl;

    // Convert to Upper Case
    string s12="abcdefghijklmnop";
    transform(s12.begin(),s12.end(),s12.begin(),::toupper);
    cout<<s12<<endl;


    
    string s13 = "geeksforgeeks";
    char z = 'e';
   
    cout << count(s13.begin(), s13.end(), z);
     
    return 0;
}