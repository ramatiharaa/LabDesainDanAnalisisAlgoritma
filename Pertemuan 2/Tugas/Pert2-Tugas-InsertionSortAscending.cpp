#include <iostream>
using namespace std;


void insertionSortAsc(int arr[], int arraySize) {
	int currentIndex;
	int temp;
	
	for(int i = 0; i < arraySize - 1; i++) {
		currentIndex = i + 1;
		while(currentIndex != 0) {
			if(arr[currentIndex] < arr[currentIndex - 1]) {
				temp = arr[currentIndex - 1];
				arr[currentIndex - 1] = arr[currentIndex];
				arr[currentIndex] = temp;
				currentIndex--;
			} else {
				currentIndex = 0;
			}
		}
		cout << "Proses sorting\n";
		for(int i = 0; i < arraySize; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	cout << "Hasil akhir\n";
	for(int i = 0; i < arraySize; i++) {
		cout << arr[i] << " ";
	}
}


int main() {
	int arraySize;
	
	cout << "Masukkan banyak array: "; cin >> arraySize;
	int arr[arraySize];
	for(int i = 0; i < arraySize; i++) {
		cout << "Masukkan angka ke " << i << ": "; cin >> arr[i];
		cout << "\n";
	}
	
	insertionSortAsc(arr, arraySize);
}
