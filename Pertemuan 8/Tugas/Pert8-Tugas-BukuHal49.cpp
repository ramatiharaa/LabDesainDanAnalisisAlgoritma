#include <iostream>
using namespace std;

const int MAX_SIZE = 3;

class Queue {
    private:
        int front = -1;
        int rear = -1;
        string arr[MAX_SIZE];

    public:
        bool isFull() {
            if (rear == MAX_SIZE - 1) {
                return true;
            } else {
                return false;
            }
        }

        bool isEmpty() {
            if (front == -1 && rear == -1) {
                return true;
            } else {
                return false;
            }
        }

        void display() {
            int counter = 1;
            if (isEmpty()) {
                cout << "Slot kosong!!!" << endl;
                return;
            }
            cout << "Nama peserta dalam antrian: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << ", ";
            }
            cout << endl;
        }

        void insert(string nama) {
            if (isFull()) {
                cout << "Slot penuh!!!" << endl;
                return;
            }
            if (isEmpty()) {
                front = 0;
                rear = 0;
            } else {
                rear++;
            }
            arr[rear] = nama;
            display();
        }

        void deleteLast() {
            if (isEmpty()) {
                cout << "Tidak bisa dihapus karena slot masih kosong!!!" << endl;
                return;
            }
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }
            display();
        }
};


int main() {
    int opsi;
    string nama;

    Queue queue;

    do {
        
        cout << "\n1. Masukkan nama pembeli kedalam antrian orderan tiket" << endl;
        cout << "2. Hapus nama terakhir dari antrian orderan tiket" << endl;
        cout << "3. Tampilkan semua nama pembeli dalam antrian orderan tiket" << endl;
        cout << "4. Keluar dari program orderan loket tiket" << endl;
        cout << "\nMasukkan Opsi: "; cin >> opsi;
        cin.ignore();
        switch (opsi) {
            case 1:
                cout << "Masukkan nama peserta: "; getline(cin, nama);
                queue.insert(nama);
                break;
            case 2:
                queue.deleteLast();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                cout << "Terima kasih...";
                break;
            default:
                cout << "Inputan salah!!!";
        }
    } while (opsi != 4);

    return 0;
}