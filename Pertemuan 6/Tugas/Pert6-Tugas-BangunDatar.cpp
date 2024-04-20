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

class Persegi: public BangunDatar { 
    public: 
    int getValue() { 
        return (lebar * tinggi); 
    } 
};

int main () { 
    PersegiPanjang persegiPanjang; 
    Segitiga segitiga; 
    Persegi persegi;
    
    int PPPanjang, PPLebar, SGAlas, SGTinggi, PRPanjang, PRLebar;
    
    cout << "Masukkan panjang persegi panjang: "; cin >> PPPanjang;
    cout << "Masukkan lebar persegi panjang: "; cin >> PPLebar;
    cout << "Masukkan alas segitiga: "; cin >> SGAlas;
    cout << "Masukkan tinggi segitiga: "; cin >> SGTinggi;
    cout << "Masukkan panjang persegi: "; cin >> PRPanjang;
    cout << "Masukkan lebar persegi: "; cin >> PRLebar;
    
    persegiPanjang.setValue(PPPanjang, PPLebar); 
    segitiga.setValue(SGAlas, SGTinggi);
    persegi.setValue(PRPanjang, PRLebar);
    
    cout << "\nLuas Bangun Datar: ";
    cout << "\nLuas Persegi Panjang: " << persegiPanjang.getValue();
    cout << "\nLuas Segitiga: " << segitiga.getValue();
    cout << "\nLuas Persegi: " << persegi.getValue();
    return 0; 
}