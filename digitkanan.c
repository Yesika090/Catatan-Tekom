#include <stdio.h>

int main() {
    int a, b, c, digit_a, digit_b, digit_c;

    printf("Masukkan tiga bilangan: ");
    scanf("%d %d %d", &a, &b, &c);

    digit_a = a % 10;
    digit_b = b % 10;
    digit_c = c % 10;

    if (digit_a == digit_b || digit_a == digit_c || digit_b == digit_c){
        printf("SAMA\n");
    } else {
        printf("TIDAK SAMA\n");
    }

    return 0;
}