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
        cout << "Lulus" << endl;
    }
    else
    {
        cout << "Lulus dengan KKM" << endl;
    }

    // Switch-Case Statement
    switch (nilai)
    {
    case 90 ... 100:
        cout << "A" << endl;
        break;
    case 85 ... 89:
        cout << "B+" << endl;
        break;
    case 80 ... 84:
        cout << "B" << endl;
        break;
    case 75 ... 79:
        cout << "C+" << endl;
        break;
    case 70 ... 74:
        cout << "C" << endl;
        break;
    case 65 ... 69:
        cout << "B" << endl;
        break;
    case 0 ... 64:
        cout << "B" << endl;
        break;
    default:
        cout << "Tidak Valid";
        break;
    }

    // Ternary Operator
    string tipe = (nilai > 0) ? "Positif" : "Negatif";
    cout << tipe << endl;
}