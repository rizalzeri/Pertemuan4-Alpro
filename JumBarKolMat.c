/*Nama File : JumBarKolMat.c*/
/*Deskripsi : Menjumlahkan per baris dan kolom array dalam bentuk matriks*/
/*Pembuat   : Rizal Zeri Subakti - 24060120130062*/
/*Tanggal   : rabu, 15/03/2023, 22:41*/

#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {

    /*Kamus*/
    int matrix[MAX_ROWS][MAX_COLS];
    int num_rows, num_cols, i, j, row_sum, col_sum;

    /*Algoritma*/
    printf("Masukkan jumlah baris (max %d): ", MAX_ROWS);
    scanf("%d", &num_rows);

    printf("Masukkan jumlah kolom (max %d): ", MAX_COLS);
    scanf("%d", &num_cols);

    printf("Masukkan elemen matriks:\n");
    for(i=0; i<num_rows; i++) {
        for(j=0; j<num_cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i<num_rows; i++) {
        row_sum = 0;
        for(j=0; j<num_cols; j++) {
            row_sum += matrix[i][j];
        }
        printf("\nBaris ke-%d: %d\n", i+1, row_sum);
    }

    for(j=0; j<num_cols; j++) {
        col_sum = 0;
        for(i=0; i<num_rows; i++) {
            col_sum += matrix[i][j];
        }
        printf("\nKolom ke-%d: %d\n", j+1, col_sum);
    }

    return 0;
}
