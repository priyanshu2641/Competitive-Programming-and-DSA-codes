#include<iostream>

using namespace std;

int main(){
    float cgpa[]={7, 7.1 ,7.25,7.3} ;                      // 1st Method
    cout<<"CGPA scored by students in 1st year of B.tech: "<<endl;
    cout<<cgpa[0]<<endl;
    cout<<cgpa[1]<<endl;
    cout<<cgpa[2]<<endl;
    cout<<cgpa[3]<<endl;

    int grade[4];                                         // 2nd Method
    grade[0]= 9;
    grade[1]= 9;
    grade[2]= 8;
    grade[3]= 7;

    
    grade[3]=6;                                           // We can even change the value.
    cout<<endl<<"Grade in HS101: "<<endl;
    cout<<grade[0]<<endl;
    cout<<grade[1]<<endl;
    cout<<grade[2]<<endl;
    cout<<grade[3]<<endl;

    /* for (int i=1 ; i<5 ; i++)
    {
        cout<<"The grade of student "<<i<<" in HS101 is "<<grade[i]<<"."<<endl;
    }
    int i=1;
    while(i<5)
    {
        cout<<"The grade of student "<<i<<" in HS101 is "<<grade[i]<<"."<<endl;
        i++;  
    }

    int i=1;
    do{    
        cout<<"The grade of student "<<i<<" in HS101 is "<<grade[i]<<"."<<endl;
        i++;
    }
    while(i<5);
    */
    
    // Pointers and arrays

    int* p=grade;
    // cout<<*(p++)<<endl;
    // cout<<(*p)<<endl;
    // cout<<*(++p)<<endl;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    return 0;

    }
