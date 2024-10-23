#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        // Cetak spasi
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Cetak bintang
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}