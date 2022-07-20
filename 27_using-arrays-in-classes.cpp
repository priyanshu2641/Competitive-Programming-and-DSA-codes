#include <iostream>
using namespace std;

class Shop
{
   int itemID[10];
   int itemPrice[10];
   int counter;

public:
   void initcounter(void)
   {
      counter = 0;
   }
   void setPrice(void);
   void displayPrice(void);
};

void Shop ::setPrice(void)
{
   cout << "Enter ID of your item no.: " << counter + 1 << endl;
   cin >> itemID[counter];
   cout << "Enter the price of your item: " << endl;
   cin >> itemPrice[counter];
   counter++;
}

void Shop ::displayPrice(void)
{
   for (int i = 0; i < counter; i++)
   {
      cout << " The price of the item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
   }
}

int main()
{
   Shop BTW;
   BTW.initcounter();
   BTW.setPrice();
   BTW.setPrice();
   BTW.setPrice();
   BTW.displayPrice();

   Shop Xero;
   Xero.initcounter();
   Xero.setPrice();
   Xero.setPrice();
   Xero.setPrice();
   Xero.displayPrice();

   return 0;
}