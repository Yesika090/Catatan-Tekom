#include <stdio.h>

int main() {
    int tinggi, i, j;

    printf("Masukkan tinggi layang-layang: ");
    scanf("%d", &tinggi);

    // Bagian atas layang-layang
    for (i = 1; i <= tinggi; ++i) {
        for (j = 1; j <= tinggi - i; ++j) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }
        printf("\n");
    }

    // Bagian bawah layang-layang
    for (i = tinggi - 1; i >= 1; --i) {
        for (j = 1; j <= tinggi - i; ++j) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}