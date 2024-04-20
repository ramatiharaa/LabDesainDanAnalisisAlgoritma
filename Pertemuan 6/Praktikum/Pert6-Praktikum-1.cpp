#include <iostream>
using namespace std;

class Karyawan{
	private:
		double gaji;
		string nama;
		int umur;
		
	public:
		void setGaji(double x) {
			gaji = x;
		}
		
		void setNama(string y) {
			nama = y;
		}
		
		void setUmur(int z) {
			umur = z;
		}
		
		double getGaji() {
			return gaji;
		}
		
		string getNama() {
			return nama;
		}
		
		int getUmur() {
			return umur;
		}
		
};

int main() {
	Karyawan ky;
	
	int umur;
	double gaji;
	string nama;
	
	cout<<"Masukkan nama karyawan: "; getline(cin, nama);
	cout<<"Masukkan gaji karyawan: "; cin >> gaji;
	cout<<"Masukkan usia karyawan: "; cin >> umur;
	ky.setNama(nama);
	ky.setGaji(gaji);
	ky.setUmur(umur);
	
	cout<<"Nama: " << ky.getNama() << endl;
	cout<<"gaji: " << ky.getGaji() << endl;
	cout<<"umur: " << ky.getUmur() << endl;
	
	return 0;
	
}
