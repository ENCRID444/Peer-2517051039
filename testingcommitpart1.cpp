#include <iostream>
using namespace std;

//Tugas: - Membuat fungsi cariNama() untuk mencari nama tertentu. - Menampilkan hasil pencarian (hadir/tidak hadir). Materi: array, loop for, if-else, return value.

bool cariNama(string daftarNama[], int ukuran, string namaDicari) {
    for (int i = 0; i < ukuran; i++) {
        if (daftarNama[i] == namaDicari) {
            return true; // Nama ditemukan
        }
    }
    return false; // Nama tidak ditemukan
}
int main() {
    const int ukuran = 5;
    string daftarNama[ukuran] = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    string namaDicari;

    cout << "Masukkan nama yang ingin dicari: ";
    cin >> namaDicari;

    if (cariNama(daftarNama, ukuran, namaDicari)) {
        cout << namaDicari << " hadir dalam daftar." << endl;
    } else {
        cout << namaDicari << " tidak hadir dalam daftar." << endl;
    }

    return 0;
}