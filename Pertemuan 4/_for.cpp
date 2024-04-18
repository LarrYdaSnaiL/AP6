#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}