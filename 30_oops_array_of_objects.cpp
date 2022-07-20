#include <iostream>
using namespace std;

class Employee
{
   int iD;
   int salary;

public:
   void setiD(void)
   {
      salary = 110;
      cout << "Enter the ID: ";
      cin >> iD;
   }
   void getiD(void)
   {
      cout<< "The ID of this employee is " << iD << endl;
      cout<<"The salary of this employee is "<<salary<<endl;
   }
};

int main()
{
   Employee Priyanshu, Aayush, Rohan;

   // Priyanshu.setiD();
   // Priyanshu.getiD();
   // Aayush.setiD();
   // Aayush.getiD();
   // Rohan.setiD();
   // Rohan.getiD();

   Employee Google[4];
   for (int i=0; i<4;i++)
   {
      Google[i].setiD();
      Google[i].getiD();
   }
   return 0;
}