#include <stdio.h>

int main()
{
    char nama[50];
    int nim;
    char kom;
    float ip;

    printf("Masukkan Nama : ");
    // scanf("%s", &nama);
    gets(nama);

    printf("Masukkan NIM : ");
    scanf("%d", &nim);

    printf("Masukkan KOM : ");
    scanf(" %c", &kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    printf("Nama    : %s\n", nama);
    printf("NIM     : %d\n", nim);
    printf("KOM     : %c\n", kom);
    printf("IP      : %.2f", ip);
}

/*
    %s = string
    %c = char
    %d = decimal
    %lf = double
    %f = float
*/