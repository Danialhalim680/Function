#include <iostream>
using namespace std;

void findMax(int&, int);

int main()
{
    int firstnum, secnum;

    cout << "Please enter 2 numbers: ";
    cin  >> firstnum >> secnum;

    findMax(firstnum, secnum);

    cout << firstnum << secnum << endl;
}

void findMax(int& x, int y)
{
    x+3;
    if (x > y)
    {
        cout << "Max = " << x << endl;
    }
    else
    {
        cout << "Max = " << y << endl;
    }
}
