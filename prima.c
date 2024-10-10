#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &num);

    // Bilangan prima lebih besar dari 1
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Cek apakah bilangan habis dibagi bilangan selain 1 dan dirinya sendiri
        for (i = 2; i <= num/2; ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d adalah bilangan prima.\n", num);
    else
        printf("%d bukan bilangan prima.\n", num);

    return 0;
}

