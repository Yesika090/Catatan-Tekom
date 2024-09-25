#include <stdio.h>

int main() {
    int tinggi, i, j;

    printf("Masukkan tinggi piramida: ");
    scanf("%d", &tinggi);

    for (i = 1; i <= tinggi; ++i) {
        // Cetak spasi di awal
        for (j = 1; j <= tinggi - i; ++j) {
            printf(" ");
        }

        // Cetak bintang
        for (j = 1; j <= i; ++j) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}