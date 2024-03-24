#include <iostream>
using namespace std;

void swap(int arr[], int pos1, int pos2) { //fungsi untuk memindahkan data dari index awal dengan index akhir
	int temp; //pembuatan inisialisasi variable sementara
	temp = arr[pos1]; //nilai array pertama akan ditampung di variable sementara
	arr[pos1] = arr[pos2]; //nilai array pertama akan di replace dengan nilai array kedua
	arr[pos2] = temp; //nilai array kedua akan di replace dengan nilai di variable sementara
}

int partition(int arr[], int low, int high, int pivot) { // fungsi untuk membuat partisi dari suatu array
	int i = low; //variable i akan diisi variable parameter low
	int j = low; //variable j akan diisi variable parameter low
	while(i <= high) { //looping jika var i lebih kecil samadengan var high
		if(arr[i] > pivot) { // jika iya akan cek apakah nilai arr index ke i lebih besar dibanging nilai pivot
			i++; //jika iya akan di increment
		}
		else { //jika tidak akan masuk ke kondisi ini
			swap(arr, i, j); //proses swap antara array 1 dan array 2
			i++; //proses increment variable i
			j++; //proses increment variable j 
		}
	}
	return j - 1; //akan return nilai j - 1
}

void quicksort(int arr[], int low, int high) {
	if(low < high){ //pengecekan jika index awal lebih kecil dari index akhir
		int pivot = arr[high]; //jika iya, akan membuat nilai pivot menjadi nilai array dengan posisi index terakhir
		int pos = partition(arr, low, high, pivot); //nilai pos akan diisi dari hasil output function partition
		
		quicksort(arr, low, pos - 1); //pemanggilan rekursif
		quicksort(arr, pos+1, high); //pemanggilan rekursif
	}
}

int main(){
	int n; //variable untuk keep inputan user terkait panjang atau size dari suatu array
	cout << "Tentukan panjang array : "; cin >> n; //inputan user terkait panjang atau size dari suatu array
	int arr[n]; //assign array dengan size sesuai inputan user
	for(int i = 0; i < n; i++) { //inputan user dengan perulangan sesuai inputan size array user untuk menginput suatu nilai yang akan di sort nantinya
		cin >> arr[i]; //inputan user untuk menginput suatu nilai yang akan di sort nantinya
	}
	quicksort(arr, 0, n - 1); //memanggil fungsi untuk quicksort
	cout << "Berikut adalah array yang telah di sortir: "; //menampilkan array yang telah di sorting
	for( int i = 0; i < n; i++) { //menampilkan array yang telah di sorting
		cout << arr[i] << "\t"; //menampilkan array yang telah di sorting
	}
}
