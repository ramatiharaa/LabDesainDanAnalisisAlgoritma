#include <iostream>
using namespace std;


void selectionSortAsc(int arr[], int arraySize) {
	int LastMaksimumValueIndex;
	int temp;
	
	for(int i = 0; i < arraySize - 1; i++) {
		int maksimumValue = arr[i];
		for(int j = i + 1; j < arraySize; j++) {
			if(arr[j] > maksimumValue) {
				maksimumValue = arr[j];
				LastMaksimumValueIndex = j;
			}
		}
		temp = arr[i];
		arr[i] = maksimumValue;
		arr[LastMaksimumValueIndex] = temp;
		cout << "\nIterasi ke-" << i + 1 << ": ";
		for(int i = 0; i < arraySize; i++) {
			cout << arr[i] << " ";
		}
	}
	cout << "\nData setelah sorting: ";
	for(int i = 0; i < arraySize; i++) {
		cout << arr[i] << " ";
	}
}


int main() {
	int arraySize;
	
	cout << "Masukkan jumlah elemen: "; cin >> arraySize;
	int arr[arraySize];
	cout << "\n";
	for(int i = 0; i < arraySize; i++) {
		cout << "Masukkan nilai elemen: "; cin >> arr[i];
	}
	cout << "\nData sebelum sorting: ";
	for(int i = 0; i < arraySize; i++) {
		cout << arr[i] << " ";
	}
	
	selectionSortAsc(arr, arraySize);
}
