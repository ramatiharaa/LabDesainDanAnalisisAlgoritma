#include <iostream>
using namespace std;

class contoh { // class nya
	private: // access specifier
		int nilai; // attribut variable int
	public: // access specifier
		contoh(int n) { // constructor
			nilai = n; // assign value n kedalam variable nilai
		}
		
		int getNum() { // function
			return nilai; // mengembalikan value nilai
		}
};

int main() { // fungsi main
	contoh obj(10); // membuat object dari class dengan parameter 10
	cout << "Nilai yang diinput: " << obj.getNum() << endl; // mengakses class dengan memanggil object
	return 0;
}
