#include <iostream>
using namespace std;

void quickSortAlgorithm(int arr[], int indexAwal, int indexAkhir) {
	int i = indexAwal, j = indexAkhir, pivot = arr[indexAwal];
	
	//Perulangan untuk cek apakah data masih bisa di cek atau tidak (masih ada yg belum urut atau belum)
	while(i <= j) {
		//Kalau nilai di sebelah kiri pivot lebih dari nilai pivot
		while(arr[i] > pivot) {
			i++;
		}
		//Kalau nilai di sebelah kanan pivot kurang dari nilai pivot
		while(arr[j] < pivot) {
			j--;
		}
		
		if(i <= j) {
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
		cout << "\n[";
		for(int i = 0; i < 10; i++) {
			cout << arr[i];
			if(i != 9) {
				cout << ", ";
			}
		}
		cout << "]";
	}
	if(indexAwal < j) {
		quickSortAlgorithm(arr, indexAwal, j);
	}
	if(i < indexAkhir) {
		quickSortAlgorithm(arr, i, indexAkhir);
	}
}

void quickSort(int arr[]) {
	cout << "Data yang akan di sort : [";
	for(int i = 0; i < 10; i++) {
		cout << arr[i];
		if(i != 9) {
			cout << ", ";
		}
	}
	cout << "]";
	
	cout << "\nQuick Sort :";
	quickSortAlgorithm(arr, 0, 9);
}

int main() {
	int arr[10];
	
	cout<<"Masukkan 10 angka: ";
    for (int i = 0; i < 10; i++) {
    	cin >> arr[i];
	}
	quickSort(arr);
}
