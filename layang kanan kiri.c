#include <stdio.h>

int main() {
    int tinggi = 5; // Sesuaikan tinggi layang-layang

    // Bagian atas layang-layang
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bagian bawah layang-layang
    for (int i = tinggi - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}