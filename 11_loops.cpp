#include<iostream>

using namespace std;

int main(){

    /* for loop in C++ : 
       Syntax- for(Initialization,Condition, Updation)
    */
   
/*    for(int i=1; i<=26; i++)
    {
        cout<<i<<endl;
    }

    // Condition for Infinite Loop
    for (int i=1; 0<1; i++)
    {
        cout<<i<<endl;
    }
*/

    /* while loop in C++ */
/* int i=2;
   while(i<=20)
   {
       cout<<i<<endl;
       i++;
   } 

   // Condition for Infinite While Loop
   int i=3;
   while(true)
   {
       cout<<i<<endl;
       i++;
   }

*/

    /* do-while loop in C++  */
/*    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=30);
*/
   int number;
   cout<<"Enter the number: ";
   cin>>number;
   cout<<endl;
   int i=1;
   do{
       cout<<number<<"*"<<i<<"="<<number*i<<endl;
       i++;
   }while(i<=10);
   
   return 0;

   }