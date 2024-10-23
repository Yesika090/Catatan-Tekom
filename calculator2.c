#include <stdio.h>

int main() {
    float num1, num2;

    printf("Masukkan angka pertama: ");
    scanf("%f", &num1);

    printf("Masukkan angka kedua: ");
    scanf("%f", &num2);

    // Menampilkan semua hasil operasi
    printf("\nHasil operasi:\n");
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

    // Pengecekan pembagian dengan nol
    if (num2 != 0) {
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);} 
        else {printf("Tidak dapat membagi dengan nol.\n");}
        
    return 0;}