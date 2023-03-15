/*Nama File : NilMax2Tabel.c*/
/*Deskripsi : Menampilkan nilai maksimal kedua dari array*/
/*Pembuat   : Rizal Zeri Subakti - 2406012013062*/
/*Tanggal   : rabu, 15/03/2023, 22:42*/

#include <stdio.h>

int main() {

    /*Kamus*/
    int n, i, max, max_2, arr[n];

    /*Algoritma*/
    printf("============PROGRAM NILAI MAX 2 ARRAY============\n");
    printf("Masukkan total elemen array: ");
    scanf("%d", &n);

    printf("Masukkan nilai per elemen array:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    max_2 = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max_2 && arr[i] < max) {
            max_2 = arr[i];
        }
    }

    printf("\nNilai maksimal kedua dari array yaitu %d", max_2);

    return 0;
}
