#include <stdio.h>

int main() 
{
    char operator;
    float bilangan1, bilangan2;

    printf("================================\n");
    printf("     KALKULATOR SEDERHANA       \n");
    printf("================================\n");

    printf("Pilih Operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Masukan Bilangan Pertama: ");
    scanf("%f", &bilangan1);
    printf("Masukan Bilangan Kedua: ");
    scanf("%f", &bilangan2);



    switch (operator) {
        case '+':
            printf("Hasil: %.2f\n", (bilangan1 + bilangan2));
            break;
        case '-':
            printf("Hasil: %.2f\n", (bilangan1 - bilangan2));
            break;
        case '*':
            printf("Hasil: %.2f\n", (bilangan1 * bilangan2));
            break;
        case '/':
            if (bilangan2 != 0){
                printf("Hasil: %.2f\n", (bilangan1 / bilangan2));
            } else {
                printf("Error. Pembagian Dengan 0 Tidak Diperbolehkan!!!\n");
            }
            break;
        default:
            printf("Operator Salah.\n");
            return 0;
    }
    
    return 0;
}
