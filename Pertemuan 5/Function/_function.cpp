#include <iostream>
using namespace std;

int tambah(int a, int b)
{
    return a + b;
}

int kurang(int a, int b)
{
    return a - b;
}

int kali(int a, int b)
{
    return a * b;
}

float bagi(float a, float b)
{
    return a / b;
}

void sayHello(string name)
{
    cout << "Hello " << name << endl;
}

void garis()
{
    cout << "========" << endl;
}

void bintang()
{
    cout << "******" << endl;
}

int main()
{
    system("cls");
    sayHello("Rafi");
    garis();
    bintang();

    cout << tambah(2, 3) << endl;
    cout << kurang(2, 3) << endl;
    cout << kali(2, 3) << endl;
    cout << bagi(2, 3) << endl;

    return 0;
}