#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float phi = 3.14;

    float r, t, v;

    cout << "Masukkan Jari-Jari : ";
    cin >> r;

    cout << "Masukkan Tinggi : ";
    cin >> t;

    v = phi * pow(r, 2) * t;

    cout << "Volume : " << v;
}