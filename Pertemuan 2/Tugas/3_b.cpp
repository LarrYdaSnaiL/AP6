#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float ap, tp, t, v;

    cout << "Masukkan Alas Permukaan : ";
    cin >> ap;

    cout << "Masukkan Tinggi Permukaan : ";
    cin >> tp;

    cout << "Masukkan Tinggi Limas : ";
    cin >> t;

    v = (((ap * tp) / 2) * t) / 3;

    cout << fixed;
    cout << "Volume : " << setprecision(2) << v;
}