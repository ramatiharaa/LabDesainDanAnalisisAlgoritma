#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Book {
    string title;
    int rack;

    bool operator<(Book& other) const {
        return title < other.title;
    }
};

int binarySearch(vector <Book> books, string title) {
    int low = 0;
    int high = books.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (books[mid].title == title) {
            return books[mid].rack;
        } else if (books[mid].title < title) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    vector <Book> library = {
        {"Algoritma Dasar", 1},
        {"Buku Pemrograman C++", 2},
        {"Ilmu Komputer", 3},
        {"Matematika Diskrit", 4},
        {"Struktur Data", 5}
    };

    string bookTitle;
    cout << "Masukkan judul buku yang ingin dicari: ";
    getline(cin, bookTitle);

    int rackNumber = binarySearch(library, bookTitle);

    if (rackNumber != -1) {
        cout << "Buku dengan judul \"" << bookTitle << "\" berada di rak nomor: " << rackNumber << endl;
    } else {
        cout << "Buku dengan judul \"" << bookTitle << "\" tidak ditemukan." << endl;
    }

    return 0;
}
