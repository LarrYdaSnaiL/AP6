#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    loop:
        cout << "Nilai i: " << i << std::endl;
        i++;

    if (i <= 10)
    {
        goto loop;
    }

    return 0;
}