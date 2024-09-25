#include <stdio.h>

int main() {
    int tinggi, i, j;

    printf("Masukkan tinggi piramida: ");
    scanf("%d", &tinggi);

    for (i = 1; i <= tinggi; ++i) {
        // Cetak spasi di awal setiap baris
        for (j = 1; j <= tinggi - i; ++j) {
            printf(" ");
        }

        // Cetak bintang membentuk segitiga
        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}