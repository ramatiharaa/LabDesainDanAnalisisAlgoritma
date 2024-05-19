#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> antrian;

    int jumlahAngka;
    cout << "Masukkan Jumlah Angka Yang Ingin Dimasukkan Ke Dalam Queue: ";
    cin >> jumlahAngka;

    cout << "Masukkan " << jumlahAngka << " Angka :\n";
    for (int i = 0; i < jumlahAngka; i++) {
        int angka;
        cin >> angka;
        antrian.push(angka);
    }

    cout << "Menampilkan Angka Dari Queue:\n";
    while (!antrian.empty()) {
        int angka = antrian.front();
        cout << angka << " ";
        antrian.pop();
    }

    cout << endl;

    return 0;
}
