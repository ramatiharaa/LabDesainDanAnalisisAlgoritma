#include <iostream>
using namespace std; 

class BangunDatar { 
    protected:
    int lebar, tinggi;
    
    public:
    void setValue(int a, int b) {
        lebar = a;
        tinggi = b;
    } 
};

class PersegiPanjang: public BangunDatar { 
    public: 
    int getValue() {
        return (lebar * tinggi); 
    } 
}; 

class Segitiga: public BangunDatar { 
    public: 
    int getValue() { 
        return (lebar * tinggi / 2); 
    } 
};

int main () { 
    PersegiPanjang persegiPanjang; 
    Segitiga segitiga; 
    
    int PPPanjang, PPLebar, SGAlas, SGTinggi;
    
    cout << "Masukkan panjang persegi panjang: "; cin >> PPPanjang;
    cout << "Masukkan lebar persegi panjang: "; cin >> PPLebar;
    cout << "Masukkan alas segitiga: "; cin >> SGAlas;
    cout << "Masukkan tinggi segitiga: "; cin >> SGTinggi;
    
    persegiPanjang.setValue(PPPanjang, PPLebar); 
    segitiga.setValue(SGAlas, SGTinggi);
    
    cout << "\nLuas Bangun Datar: ";
    cout << "\nLuas Persegi Panjang: " << persegiPanjang.getValue();
    cout << "\nLuas Segitiga: " << segitiga.getValue();
    return 0; 
}
