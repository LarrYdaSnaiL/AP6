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

    cout << "Masukkan Tinggi Prisma : ";
    cin >> t;

    v = ((ap * tp) / 2) * t;

    cout << fixed;
    cout << "Volume : " << setprecision(2) << v;
}