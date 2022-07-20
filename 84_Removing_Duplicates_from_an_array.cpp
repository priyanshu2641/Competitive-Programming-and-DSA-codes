#include <iostream>
using namespace std;

void display(int cgpa[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << cgpa[i] << " ";
    }
}

int removing_duplicates(int cgpa[], int size)
{
    int result = 1;
    for (int i = 1; i < size; i++)
    {
        if (cgpa[i] != cgpa[result - 1])
        {
            cgpa[result] = cgpa[i];
            result++;
        }
    }
    
    return result;
}

int main()
{

    int cgpa[] = {4, 4, 4, 5, 5, 6, 7, 10, 10, 20, 20};
    int size = sizeof(cgpa) / sizeof(int);
    int removal = removing_duplicates(cgpa, size);
    display(cgpa, size);

    return 0;
}
