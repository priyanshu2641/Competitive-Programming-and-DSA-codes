#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:

    Point(){
        x = 0;
        y = 0;
    }

    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    Point(int a){
        x = a;
        y = 0;
    }

    void displayPoint()
    {
        cout << "The Point is (" << x << "," << y << ")" << endl;
    }
};
int main()
{
    Point P(26, 4);
    P.displayPoint();
   
    Point Q;
    Q.displayPoint();

    Point R(26);
    R.displayPoint();
     
    return 0;
}