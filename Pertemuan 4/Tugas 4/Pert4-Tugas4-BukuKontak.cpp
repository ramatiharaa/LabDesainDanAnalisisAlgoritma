#include <iostream>
using namespace std;

class Kontak {
	public:
		Kontak(string arrayKontak[3][2]) {
			for (int i = 0; i < 3; i++) {
				cout << "Kontak ke-" << i + 1 << ":\n";
				cout << "Nama: " << arrayKontak[i][0] << "\n";
				cout << "Nomor Telepon: " << arrayKontak[i][1] << "\n";
				cout << "------------------------------------------\n";
			}
		}
};

int main() {
	//Input
	string arrayKontak[3][2];
	cout << "Masukkan kontak (maksimal 3 kontak):\n";
	bool stillInput = true;
	string yorn = "y";
	int jumlahData = 0;
	while (stillInput && jumlahData != 3) {
		if (yorn == "y") {
			cout << "Masukkan Nama Kontak ke-" << jumlahData + 1 << ": "; getline(cin, arrayKontak[jumlahData][0]);
	       	cout << "Masukkan Nomor Telepon Kontak ke-" << jumlahData + 1 << ": "; cin >> arrayKontak[jumlahData][1];
	       	cout << "Kontak berhasil ditambahkan.\n";
	       	jumlahData++;
	       	if (jumlahData != 3) {
	       		cout << "Tambahkan kontak lagi? (y/n): "; cin >> yorn;
			}
	     	cin.ignore();
		} else {
			stillInput = false;
		}
	}
	
	//Output
	cout << "Daftar Kontak:\n\n";
	Kontak showKontak(arrayKontak);
	
	return 0;
	
}
