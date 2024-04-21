#include <iostream>
using namespace std;

class Mahasiswa {
    protected:
        string nama, jurusan, fakultas;
        int umur;

    public:
        Mahasiswa(string _nama, int _umur, string _jurusan, string _fakultas): nama(_nama), umur(_umur), jurusan(_jurusan), fakultas(_fakultas) {}

        virtual void status()  const = 0;

        void dataMahasiswa() const {
            cout << "Nama: " << nama << endl;
            cout << "Umur: " << umur << endl;
            cout << "Jurusan: " << jurusan << endl;
            cout << "Fakultas: " << fakultas << endl;
            status();
        }
};

class MahasiswaAktif : public Mahasiswa {
    public:
        MahasiswaAktif(string _nama, int _umur, string _jurusan, string _fakultas) : Mahasiswa(_nama, _umur, _jurusan, _fakultas) {}

        void status() const override {
            cout << "Status: Aktif" << endl;
        }
};

class MahasiswaAlumni : public Mahasiswa {
    public:
        MahasiswaAlumni(string _nama, int _umur, string _jurusan, string _fakultas) : Mahasiswa(_nama, _umur, _jurusan, _fakultas) {}

        void status() const override {
            cout << "Status: Alumni" << endl;
        }
};

int main() {
    Mahasiswa* ptrMahasiswaAktif = new MahasiswaAktif("Rama Tihara", 19, "Teknologi Informasi", "Informatika dan Pariwisata");
    cout << "Informasi Mahasiswa Aktif:" << endl;
    ptrMahasiswaAktif->dataMahasiswa();
    delete ptrMahasiswaAktif;
    cout << endl;

    Mahasiswa* ptrMahasiswaAlumni = new MahasiswaAlumni("Abang Jago", 30, "Dentist", "Kesehatan");
    cout << "Informasi Mahasiswa Alumni:" << endl;
    ptrMahasiswaAlumni->dataMahasiswa();
    delete ptrMahasiswaAlumni;

    return 0;
}
