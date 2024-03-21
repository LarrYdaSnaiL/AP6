#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float tb, bb, bmi;

    cout << "Masukkan Tinggi Badan (CM): ";
    cin >> tb;

    cout << "Masukkan Berat Badan (KG): ";
    cin >> bb;

    bmi = float(bb / pow((tb / 100), 2));
    cout << bmi << endl;

    if (bmi < 18.5)
    {
        cout << "Berat Badan Kurang" << endl;
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        cout << "Berat Badan Normal" << endl;
    }
    else if (bmi >= 25 && bmi < 30)
    {
        cout << "Berat Badan Berlebih";
    }
    else
    {
        cout << "Obesitas";
    }
}