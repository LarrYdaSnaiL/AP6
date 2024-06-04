#include <iostream>
#include <vector>

using namespace std;

class Mahasiswa
{
private:
    string nama, nim;
    float nilai;

public:
    Mahasiswa(string nama, string nim, float nilai)
    {
        this->nama = nama;
        this->nim = nim;
        this->nilai = nilai;
    }

    string getNama()
    {
        return this->nama;
    }

    string getNim()
    {
        return this->nim;
    }

    float getNilai()
    {
        return this->nilai;
    }

    void display()
    {
        cout << "Nama  : " << this->getNama() << endl;
        cout << "NIM   : " << this->getNim() << endl;
        cout << "Nilai : " << this->getNilai() << endl;
    }
};

int main()
{
    system("cls");

    vector<Mahasiswa> mahasiswa;
    int n;
    string nama, nim;
    float nilai;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();

        cout << "Masukkan nama : ";
        getline(cin, nama);

        cout << "Masukkan NIM : ";
        cin >> nim;

        cout << "Masukkan nilai : ";
        cin >> nilai;

        Mahasiswa mhs(nama, nim, nilai);
        mahasiswa.push_back(mhs);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Mahasiswa " << i + 1 << endl;
        mahasiswa[i].display();
    }
}