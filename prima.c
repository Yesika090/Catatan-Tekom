#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;

    printf("Masukkan bilangan: ");
    scanf("%d", &num);

    // Cek apakah bilangan lebih kecil dari 2
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Cek pembagi dari 2 hingga akar kuadrat dari bilangan
        for (i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d adalah bilangan prima.\n", num);
    } else {
        printf("%d bukan bilangan prima.\n", num);
    }

    return 0;
}