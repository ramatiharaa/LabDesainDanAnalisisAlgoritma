#include <iostream>
using namespace std;

class Mahasiswa {
	private:
		string nama;
		string npm;
		
		public:
			void setNama(string n) {
				nama = n;
			}
			
			void setNpm(string s) {
				npm = s;
			}
			
			string getNama() {
				return nama;
			}
			
			string getNpm() {
				return npm;
			}
};

int main() {
	Mahasiswa rama, egi, adi, david, gilang, guntur, luthfi, maul, ryan, smit, stev, alex, dani, caca;
    string dataMahasiswa[14][2];

    for (int i = 0; i < 14; i++) {
        cout << "Masukkan Nama Mahasiswa " << i + 1 << ": "; getline(cin, dataMahasiswa[i][0]);
        cout << "Masukkan NPM Mahasiswa " << i + 1 << ": "; cin >> dataMahasiswa[i][1];
        cout << endl;
        cin.ignore();
    }

    for (int i = 0; i < 14; i++) {
        switch (i) {
            case 0:
                rama.setNama(dataMahasiswa[i][0]);
                rama.setNpm(dataMahasiswa[i][1]);
            case 1:
                egi.setNama(dataMahasiswa[i][0]);
                egi.setNpm(dataMahasiswa[i][1]);
            case 2:
                adi.setNama(dataMahasiswa[i][0]);
                adi.setNpm(dataMahasiswa[i][1]);
            case 3:
                david.setNama(dataMahasiswa[i][0]);
                david.setNpm(dataMahasiswa[i][1]);
            case 4:
                gilang.setNama(dataMahasiswa[i][0]);
                gilang.setNpm(dataMahasiswa[i][1]);
            case 5:
                guntur.setNama(dataMahasiswa[i][0]);
                guntur.setNpm(dataMahasiswa[i][1]);
            case 6:
                luthfi.setNama(dataMahasiswa[i][0]);
                luthfi.setNpm(dataMahasiswa[i][1]);
            case 7:
                maul.setNama(dataMahasiswa[i][0]);
                maul.setNpm(dataMahasiswa[i][1]);
            case 8:
                ryan.setNama(dataMahasiswa[i][0]);
                ryan.setNpm(dataMahasiswa[i][1]);
            case 9:
                smit.setNama(dataMahasiswa[i][0]);
                smit.setNpm(dataMahasiswa[i][1]);
            case 10:
                stev.setNama(dataMahasiswa[i][0]);
                stev.setNpm(dataMahasiswa[i][1]);
            case 11:
                alex.setNama(dataMahasiswa[i][0]);
                alex.setNpm(dataMahasiswa[i][1]);
            case 12:
                dani.setNama(dataMahasiswa[i][0]);
                dani.setNpm(dataMahasiswa[i][1]);
            case 13:
                caca.setNama(dataMahasiswa[i][0]);
                caca.setNpm(dataMahasiswa[i][1]);
        }
    }
	
	for (int i = 0; i < 14; i++) {
        cout << "Mahasiswa " << i + 1 << ":\n";
        switch (i) {
            case 0:
                cout << "Nama: " << rama.getNama() << "\n";
                cout << "NPM: " << rama.getNpm() << "\n";
                break;
            case 1:
                cout << "Nama: " << egi.getNama() << "\n";
                cout << "NPM: " << egi.getNpm() << "\n";
                break;
            case 2:
                cout << "Nama: " << adi.getNama() << "\n";
                cout << "NPM: " << adi.getNpm() << "\n";
                break;
            case 3:
                cout << "Nama: " << david.getNama() << "\n";
                cout << "NPM: " << david.getNpm() << "\n";
                break;
            case 4:
                cout << "Nama: " << gilang.getNama() << "\n";
                cout << "NPM: " << gilang.getNpm() << "\n";
                break;
            case 5:
                cout << "Nama: " << guntur.getNama() << "\n";
                cout << "NPM: " << guntur.getNpm() << "\n";
                break;
            case 6:
                cout << "Nama: " << luthfi.getNama() << "\n";
                cout << "NPM: " << luthfi.getNpm() << "\n";
                break;
            case 7:
                cout << "Nama: " << maul.getNama() << "\n";
                cout << "NPM: " << maul.getNpm() << "\n";
                break;
            case 8:
                cout << "Nama: " << ryan.getNama() << "\n";
                cout << "NPM: " << ryan.getNpm() << "\n";
                break;
            case 9:
                cout << "Nama: " << smit.getNama() << "\n";
                cout << "NPM: " << smit.getNpm() << "\n";
                break;
            case 10:
                cout << "Nama: " << stev.getNama() << "\n";
                cout << "NPM: " << stev.getNpm() << "\n";
                break;
            case 11:
                cout << "Nama: " << alex.getNama() << "\n";
                cout << "NPM: " << alex.getNpm() << "\n";
                break;
            case 12:
                cout << "Nama: " << dani.getNama() << "\n";
                cout << "NPM: " << dani.getNpm() << "\n";
                break;
            case 13:
                cout << "Nama: " << caca.getNama() << "\n";
                cout << "NPM: " << caca.getNpm() << "\n";
                break;
        }
    }
    
	
	return 0;
}
