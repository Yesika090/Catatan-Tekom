#include <stdio.h>

int main() {
    int sisi;

    printf("Masukkan panjang sisi persegi: ");
    scanf("%d", &sisi);

    // Membuat persegi menggunakan loop bersarang
    for (int i = 1; i <= sisi; i++) {
        for (int j = 1; j <= sisi; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}