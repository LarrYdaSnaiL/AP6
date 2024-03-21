#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout << "Masukkan Nilai : ";
    cin >> nilai;

    // If Statement
    if (nilai < 65)
    {
        cout << "Tidak Lulus" << endl;
    }

    // If-Else Statement
    if (nilai < 65)
    {
        cout << "Tidak Lulus" << endl;
    }
    else
    {
        cout << "Lulus" << endl;
    }

    // If-Else-If Statement
    if (nilai < 65)
    {
        cout << "Tidak Lulus" << endl;
    }
    else if (nilai > 65)
    {
        cout << "Lulus";
    }
    else
    {
        cout << "Lulus dengan KKM";
    }
}