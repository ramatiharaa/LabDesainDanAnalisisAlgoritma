#include <iostream>
using namespace std;

int main() {
    struct Barang {
        string namaBarang;
        int hargaBarang;
    };

    Barang daftarBarang[5] = {
        {"Buku", 5000},
        {"Pensil", 1000},
        {"Pulpen", 2000},
        {"Penghapus", 500},
        {"Penggaris", 1500}
    };

    string cari;
    int hargaBarang = 0;
    bool isKetemu = false;
    int index;
    int i = 0;

    cout << "Masukkan nama barang yang ingin dicari: "; cin >> cari;

    do {
        if(daftarBarang[i].namaBarang == cari) {
            isKetemu = true;
            index = i;
        } else {
            i++;
        }
    } while(isKetemu == false && i != 5);

    if(isKetemu) {
        cout << "Barang "<< cari << " ditemukan dengan harga " << daftarBarang[index].hargaBarang;
    } else {
        cout << "Maaf, barang " << cari << " tidak ditemukan dalam daftar";
    }

}