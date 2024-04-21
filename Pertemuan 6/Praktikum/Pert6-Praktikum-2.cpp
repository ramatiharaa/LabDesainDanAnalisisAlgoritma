#include <iostream>
#include <vector>
using namespace std;

class Mahasiswa {
	private:
		vector <int> usia;
		vector <float> ipk;
		vector <string> nama;

	public:
		void setNama(string a) {
			nama.push_back(a);
		}	
		void setUsia(int b) {
			usia.push_back(b);
		}
		void setIPK(float c) {
			ipk.push_back(c);
		}
		string getNama(int index) {
			return nama[index];
		}
		int getUsia(int index) {
			return usia[index];
		}
		float getIPK(int index) {
			return ipk[index];
		}	
};

int main() {
	Mahasiswa ms;

	string nama;
	int usia;
	float ipk;
	int nilai;

	cout << "masukan jumlah data : "; cin >> nilai;
	cout << endl;
	
	for (int i = 0 ; i < nilai; i++) {
		cin.ignore();
		cout << "nama : "; getline(cin, nama);
		cout << "usia : "; cin >> usia;
		cout << "ipk : "; cin >> ipk;
		cout << endl;
		ms.setNama(nama);
		ms.setUsia(usia);
		ms.setIPK(ipk);
	}
	
	
	for(int i = 0; i < nilai; i++) {
		cout << "nama mahasiswa: " << ms.getNama(i)<<endl;
		cout << "umur: " << ms.getUsia(i) << endl;
		cout << "ipk: " << ms.getIPK(i) << endl;
	}
}
