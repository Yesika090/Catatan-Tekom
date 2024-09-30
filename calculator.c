#include <stdio.h>

int main() {
    char operasi;
    float angka1, angka2;

    printf("Masukkan angka pertama: ");
    scanf("%f", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &angka2);
  

    printf("Pilih operasi (+, -, *, /): ");
    scanf(" %c", &operasi);

    switch (operasi) {
        case '+':
            printf("Hasil: %.2f\n", angka1 + angka2);
            break;
        case '-':
            printf("Hasil: %.2f\n", angka1 - angka2);
            break;
        case '*':
            printf("Hasil: %.2f\n", angka1 * angka2);
            break;
        case '/':
            if (angka2 != 0)
                printf("Hasil: %.2f\n", angka1 / angka2);
            else
                printf("Error: Pembagian dengan nol!\n");
            break;
        default:
            printf("Operasi tidak valid!\n");
            break;
    }

    return 0;
}
