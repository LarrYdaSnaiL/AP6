#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    system("cls");

    string nama;
    int nim;
    char kom;
    float ip;

    cout << "Masukkan Nama : ";
    // cin >> nama;
    getline(cin, nama);

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan IP : ";
    cin >> ip;

    system("cls");

    cout << "Nama   : " << nama << endl;
    cout << "NIM    : " << nim << endl;
    cout << "KOM    : " << kom << endl;
    cout << "IP     : " << fixed << setprecision(2) << ip << endl;
}