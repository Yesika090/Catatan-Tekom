#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char nama[50];
    char prodi[50];
    char fakultas[50];
    char universitas[50];
};

int main() {
    struct Mahasiswa mhs;

    printf("Masukkan nama anda: ");
    fgets(mhs.nama, sizeof(mhs.nama), stdin);
    mhs.nama[strcspn(mhs.nama, "\n")] = '\0'; 

    printf("Masukkan program studi: ");
    fgets(mhs.prodi, sizeof(mhs.prodi), stdin);
    mhs.prodi[strcspn(mhs.prodi, "\n")] = '\0';

    printf("Masukkan fakultas: ");
    fgets(mhs.fakultas, sizeof(mhs.fakultas), stdin);
    mhs.fakultas[strcspn(mhs.fakultas, "\n")] = '\0';

    printf("Masukkan universitas: ");
    fgets(mhs.universitas, sizeof(mhs.universitas), stdin);
    mhs.universitas[strcspn(mhs.universitas, "\n")] = '\0';

    printf("\nData Mahasiswa:\n");
    printf("Nama: %s\n", mhs.nama);
    printf("Program Studi: %s\n", mhs.prodi);
    printf("Fakultas: %s\n", mhs.fakultas);
    printf("Universitas: %s\n", mhs.universitas);

    return 0;
}