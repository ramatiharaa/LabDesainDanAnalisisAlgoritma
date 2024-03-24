#include <iostream>
using namespace std;

void printArray(int arr[], int arr_size) {
	cout << "[";
	for(int i = 0; i < arr_size; i++) {
		cout << arr[i];
		if(i < arr_size - 1) {
			cout << ", ";
		}
	}
	cout << "]";
	cout << endl;
}

void merge(int arr[], int kiri, int tengah, int kanan) {
	int subArrayOne = tengah - kiri + 1, subArrayTwo = kanan - tengah;

	int *leftArray = new int[subArrayOne], *rightArray = new int[subArrayTwo];

	for(int i = 0; i < subArrayOne; i++) {
		leftArray[i] = arr[kiri + i];
	}
	
	for(int j = 0; j < subArrayTwo; j++) {
		rightArray[j] = arr[tengah + 1 + j];
	}

	int indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0, indexOfMergedArray = kiri;

	while(indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
		if(leftArray[indexOfSubArrayOne] >= rightArray[indexOfSubArrayTwo]) { //ini
			arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		} else {
			arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}

	while(indexOfSubArrayOne < subArrayOne) {
		arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}

	while(indexOfSubArrayTwo < subArrayTwo) {
		arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
	delete[] leftArray;
	delete[] rightArray;
	cout << "Penggabung List: ";
	printArray(arr, subArrayOne);
	cout << "Penggabung List: ";
	printArray(arr, subArrayTwo);
}

void pemecahan(int arr[], int awal, int akhir) {
	int tengah = awal + (akhir - awal) / 2;
	cout << "Pemecah List: ";
	printArray(arr, akhir);
	if (awal >= akhir) {
		return;
	}
	pemecahan(arr, awal, tengah);
	pemecahan(arr, tengah + 1, akhir);
	merge(arr, awal, tengah, akhir);
}

int main() {
	int arr[] = {6, 4, 8, 7, 3, 1, 5};
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Data sebelum di sort: \n";
	printArray(arr, arr_size);
	cout << endl;

	pemecahan(arr, 0, arr_size - 1);

	cout << "\nData setelah di sort: \n";
	printArray(arr, arr_size);
	return 0;
}
