#include <iostream>
using namespace std;

class Kendaraan {
    protected:
        string merek;
        int tahunProduksi, jumlahPintu;

    public:
        Kendaraan(string _merek, int _tahunProduksi, int _jumlahPintu) : merek(_merek), tahunProduksi(_tahunProduksi), jumlahPintu(_jumlahPintu) {}

        virtual void info()  const = 0;

        void dataMobil() const {
            cout << "Merek Mobil: " << merek << endl;
            cout << "Tahun Produksi: " << tahunProduksi << endl;
            info();
        }
};

class Mobil : public Kendaraan {
    public:
        Mobil(string _merek, int _tahunProduksi, int _jumlahPintu) : Kendaraan(_merek, _tahunProduksi, _jumlahPintu) {}

        void info() const override {
            cout << "Jumlah Pintu: " << jumlahPintu << endl;
        }
};

int main() {
    string merekMobil = "BMW";
    int tahunProduksiMobil = 2004, jumlahPintuMobil = 2;

    Mobil mobil(merekMobil, tahunProduksiMobil, jumlahPintuMobil);
    cout << "\nInformasi Mobil: " << endl;
    mobil.dataMobil();

    return 0;
}