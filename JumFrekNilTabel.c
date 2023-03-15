/*Nama File : JumFrekNilTabel.c*/
/*Deskripsi : Menampilkan nilai elemen frekuensi array dan jumlahnya*/
/*Pembuat   : Rizal zeri subakti - 24060120130062*/
/*Tanggal   : rabu, 15/03/2023, 22:48*/

#include <stdio.h>

int main() {

    /*Kamus*/
    int n, i, j, sum = 0;

    /*Algoritma*/
    printf("============PROGRAM FREKUENSI NILAI DAN JUMLAH ARRAY============\n");
    printf("Masukkan total elemen array: ");
    scanf("%d", &n);
    int arr[n], freq[n];

    printf("Masukkan nilai per elemen array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    for (i = 0; i < n; i++) {
        if (freq[i] > 1) {
            sum += arr[i] * freq[i];
        }
    }

    printf("\n%d", sum);

    return 0;
}
