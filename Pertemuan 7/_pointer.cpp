#include <iostream>
using namespace std;

void penjumlahan(int *a, int *b)
{
    *a += *b;
    cout << *a << endl;
}

int main()
{
    system("cls");
    // Pointer Declaration
    // Normal Variabel -> var_name(data), &var_name(address)
    int number = 16;
    // pointer variabel -> var_name(adress of pointed variabel), *var_name(data of pointed variable)
    int *ptrnumber = &number;

    cout << "Isi variabel: " << number << endl;
    cout << "Alamat variabel number" << &number << endl;

    cout << "Alamat variabel ptrnumber: " << ptrnumber << endl;
    cout << "Isi variabel yang ditunjuk ptrnumber: " << *ptrnumber << endl;

    // Pointer Operation
    *ptrnumber = 37;
    cout << "Alamat variabel ptrnumber: " << ptrnumber << endl;
    cout << "Isi variabel yang ditunjuk ptrnumber: " << *ptrnumber << endl;

    cout << "Alamat variabel ptrnumber: " << &ptrnumber << endl;

    // Pointer in Array
    int num[] = {1, 2, 3, 4, 5};
    int *ptrnum = num;

    cout << "Isi variabel num indeks 0: " << num[0] << endl;
    cout << "Alamat memori variabel num indeks 0 =" << &num[0] << endl; // alamatnya
    cout << "Alamat variabel ptrnum = " << ptrnum << endl;              // alamatnya
    cout << "Isi variabel yang ditunjuk oleh ptrnum : " << *ptrnum << endl;

    // pointer as parameter
    int a = 2;
    int b = 3;

    penjumlahan(&a, &b);
    cout << a << endl;

    // pointer to pointer
    int n = 4;
    int *ptrn = &n;
    int **ptr_ptrn = &ptrn;

    cout << "isi variabel n: " << n << endl;
    cout << "Alamat variabel n: " << &n << endl;
    cout << "Alamat variabel ptrn: " << ptrn << endl;
    cout << "Isi variabel yang ditunjuk ptrn: " << *ptrn << endl;
    cout << "Alamat variabel ptrn: " << &ptrn << endl;
    cout << "Alamat variabel ptr_ptrn: " << ptr_ptrn << endl;
    cout << "Alamat variabel yang ditunjuk oleh ptr_ptrn: " << *ptr_ptrn << endl;
    cout << "Isi variabel n diakses dari ptr_ptrn: " << **ptr_ptrn << endl;
    cout << "Alamat memory ptr_ptrn: " << &ptr_ptrn << endl;

    // dynamic pointer
    int *ptr = new int; // memory allocation
    *ptr = 24;
    cout << "Isi variabel ptr:  " << *ptr << endl;
    cout << "Alamat ptr: " << ptr << endl;
    delete ptr; // memory deallocation
    cout << "Isi variabel ptr:  " << *ptr << endl;
    cout << "Alamat ptr: " << ptr << endl;
    return 0;
}