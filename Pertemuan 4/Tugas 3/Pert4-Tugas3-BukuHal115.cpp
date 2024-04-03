#include <iostream>
#include <string>

using namespace std;

class Buku {
private:
    string judul;
    string pengarang;
    bool dipinjam;

public:
    Buku(string judul, string pengarang) {
        this->judul = judul;
        this->pengarang = pengarang;
        this->dipinjam = false;
    }

    void setJudul(string judul) {
        this->judul = judul;
    }

    void setPengarang(string pengarang) {
        this->pengarang = pengarang;
    }

    void setDipinjam(bool dipinjam) {
        this->dipinjam = dipinjam;
    }

    string getJudul() const {
        return judul;
    }

    string getPengarang() const {
        return pengarang;
    }

    bool isDipinjam() const {
        return dipinjam;
    }
};

int main() {
    Buku buku1("Pemrograman", "John Doe");
    Buku buku2("Laskar Pelangi", "John Doe");
	
	cout << "Informasi Buku 1\n";
    cout << "Judul Buku: " << buku1.getJudul() << endl;
    cout << "Pengarang: " << buku1.getPengarang() << endl;
    cout << "Status Peminjaman: " << (buku1.isDipinjam() ? "Sudah dipinjam" : "Belum dipinjam") << endl;

    buku1.setJudul("Algoritma dan Struktur Data");
    buku1.setDipinjam(true);

    cout << "\nSetelah Perubahan:" << endl;
    cout << "Judul Buku: " << buku1.getJudul() << endl;
    cout << "Pengarang: " << buku1.getPengarang() << endl;
    cout << "Status Peminjaman: " << (buku1.isDipinjam() ? "Sudah dipinjam" : "Belum dipinjam") << endl;
    

    cout << "\n\n";
    
    
    cout << "Informasi Buku 2\n";
    cout << "Judul Buku: " << buku2.getJudul() << endl;
    cout << "Pengarang: " << buku2.getPengarang() << endl;
    cout << "Status Peminjaman: " << (buku2.isDipinjam() ? "Sudah dipinjam" : "Belum dipinjam") << endl;

    buku2.setJudul("Laskar Pelangi 2");
    buku2.setDipinjam(true);

    cout << "\nSetelah Perubahan:" << endl;
    cout << "Judul Buku: " << buku2.getJudul() << endl;
    cout << "Pengarang: " << buku2.getPengarang() << endl;
    cout << "Status Peminjaman: " << (buku2.isDipinjam() ? "Sudah dipinjam" : "Belum dipinjam") << endl;

    return 0;
}

