#include <stdio.h> // Header untuk input/output

int main() {
    // Mendeklarasikan variabel untuk dua angka dan hasil
    double angka1, angka2;
    double tambah, kurang, kali, bagi;

    // Meminta pengguna memasukkan dua angka
    printf("Masukkan angka pertama: ");
    scanf("%lf", &angka1); // %lf digunakan untuk membaca tipe data double

    printf("Masukkan angka kedua: ");
    scanf("%lf", &angka2);

    // Melakukan operasi matematika
    tambah = angka1 + angka2;
    kurang = angka1 - angka2;
    kali = angka1 * angka2;

    // Menampilkan hasil
    printf("\n--- Hasil Operasi ---\n");
    printf("%.2lf + %.2lf = %.2lf\n", angka1, angka2, tambah); // %.2lf menampilkan 2 angka di belakang koma
    printf("%.2lf - %.2lf = %.2lf\n", angka1, angka2, kurang);
    printf("%.2lf * %.2lf = %.2lf\n", angka1, angka2, kali);

    // Memeriksa pembagian dengan nol sebelum melakukan operasi bagi
    if (angka2 != 0) {
        bagi = angka1 / angka2;
        printf("%.2lf / %.2lf = %.2lf\n", angka1, angka2, bagi);
    } else {
        printf("Tidak bisa melakukan pembagian dengan nol.\n");
    }

    return 0; // Mengindikasikan program berakhir dengan sukses
}