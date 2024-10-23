#include <stdio.h>

int main() {
    int panjang, lebar;

    printf("Masukkan panjang persegi panjang: ");
    scanf("%d", &panjang);

    printf("Masukkan lebar persegi panjang: ");
    scanf("%d", &lebar);

    // Perulangan untuk baris
    for (int i = 1; i <= lebar; i++) {
        // Perulangan untuk kolom
        for (int j = 1; j <= panjang; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}