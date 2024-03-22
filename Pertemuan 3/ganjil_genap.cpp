// Buat program untuk mennetukan sebuah bilangan ganjil atau genap.

#include <iostream>
using namespace std;

int main()
{
    int angka;

    cout << "Masukkan Bilangan : ";
    cin >> angka;

    if ((angka % 2) == 0)
    {
        cout << "Bilangan Genap" << endl;
    }
    else
    {
        cout << "Bilangan Ganjil" << endl;
    }

    string bilangan = ((angka % 2) == 0) ? "Bilangan Genap" : "Bilangan Ganjil";
    cout << bilangan << endl;

    return 0;
}