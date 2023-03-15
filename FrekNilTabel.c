/*Nama File : FrekNilTabel.c*/
/*Deskripsi : Menampilkan nilai elemen array dengan frekuensi muncul > 1x dari array*/
/*Pembuat   : Rizal Zeri Subakti - 24060120130062*/
/*Tanggal   : Rabu, 15/03/2023, 22:35*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main() {

    /*Kamus*/
    int arr[MAX_SIZE], freq[MAX_SIZE];
    int n, i, j, count;

    /*Algoritma*/
    printf("============PROGRAM NILAI FREKUENSI ELEMEN ARRAY============\n");
    printf("Masukkan total elemen array: ");
    scanf("%d", &n);

    printf("Masukkan nilai per elemen array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("\n");
    for (i = 0; i < n; i++) {
        if (freq[i] > 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
