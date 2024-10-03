#include <stdio.h>
#include <string.h>

#define MAX_BUAH 100 // Maksimum jenis buah yang bisa diinput

struct buah {
    char nama[50];
    int harga;
};

int main() {
    struct buah daftar_buah[MAX_BUAH];
    int jumlah_buah = 0;
    char buah_input[50];
    int harga_input, jumlah_input, i, total_harga = 0;

    printf("Selamat datang di kalkulator buah!\n");

    // Input data buah
    while (1) {
        printf("Masukkan nama buah (atau 'stop' untuk berhenti): ");
        scanf("%s", buah_input);
        if (strcmp(buah_input, "stop") == 0) {
            break;
        }

        printf("Masukkan harga buah: ");
        scanf("%d", &harga_input);

        strcpy(daftar_buah[jumlah_buah].nama, buah_input);
        daftar_buah[jumlah_buah].harga = harga_input;
        jumlah_buah++;
    }

    // Input jumlah buah yang dibeli
    printf("\nMasukkan jumlah buah yang ingin dibeli:\n");
    for (i = 0; i < jumlah_buah; i++) {
        printf("%d. %s\n", i+1, daftar_buah[i].nama);
    }

    while (1) {
        printf("Masukkan nomor buah (atau 0 untuk selesai): ");
        scanf("%d", &jumlah_input);
        if (jumlah_input == 0) {
            break;
        }

        if (jumlah_input > 0 && jumlah_input <= jumlah_buah) {
            printf("Masukkan jumlah buah yang dibeli: ");
            scanf("%d", &harga_input);
            total_harga += daftar_buah[jumlah_input-1].harga * harga_input;
        } else {
            printf("Nomor buah tidak valid.\n");
        }
    }

    // Tampilkan total harga
    printf("\nTotal harga: Rp %d\n", total_harga);

    return 0;
}