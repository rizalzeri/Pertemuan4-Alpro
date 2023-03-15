/*Nama File : SimteriTabel\.c*/
/*Deskripsi : Membandingkan dua array apakah simetris atau tidak*/
/*Pembuat   : Rizal Zeri Subakti - 2406012013062*/
/*Tanggal   : Rabu, 15/03/2023, 22:21*/

#include <stdio.h>

#define MAX_SIZE 100

int main() {

    /*Kamus*/
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size, i, isSimetris = 1;

    /*Algoritma*/
    printf("Masukkan total elemen array: ");
    scanf("%d", &size);

    printf("Masukkan nilai per elemen array pertama: ");
    for(i=0; i<size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Masukkan nilai per elemen array kedua: ");
    for(i=0; i<size; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i=0; i<size; i++) {
        if(arr1[i] != arr2[size - i -1]) {
            isSimetris = 0;
            break;
        }
    }

    if(!isSimetris) {
        printf("\nArray simetris");
    }
    else {
        printf("\nArray tidak simetris");
    }

    return 0;
}
