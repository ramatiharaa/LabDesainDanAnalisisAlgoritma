#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	std::vector <string> arr;
	string temp;
	int i = 1;
	
	cout << "PENGINPUTAN BUKU\nKetik 'exit' jika ingin keluar dari penginputan\n";
	while(temp != "exit") {
		cout << "Masukkan nama buku ke-" << i << ": "; getline(cin >> std::ws, temp);
		if(temp != "exit") {
			arr.push_back(temp);
			i++;
		}
	}
	sort (arr.begin(), arr.end());
	cout << "\nResult ascending:\n";
	for(string x : arr) {
		cout << x << "\n";
	}
}
