#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<string> nameQueue;

    int max;
    cout << "Masukkan Jumlah Nama Yang Ingin Dimasukkan Kedalam Antrian : "; cin >> max;
    cout << endl;
    cin.ignore();
    for (int i = 0; i < max; i++) {
        string name;
        
        cout << "Masukkan Nama Ke-" << i + 1 << ": "; getline(cin, name);
        nameQueue.push(name);
    }

    cout << "\nNama Dalam Antrian :\n";
    while (!nameQueue.empty()) {
        string name = nameQueue.front();
        cout << name << endl;
        nameQueue.pop();
    }

    return 0;
}
