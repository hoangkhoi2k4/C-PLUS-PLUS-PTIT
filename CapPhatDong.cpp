#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	
	int *p = new int[n];
	
	srand((unsigned) time(NULL));
	
	for(int i = 0 ; i < n; i++) {
		*(p + i) = rand() % 100 + 1;
		cout << *(p + i) << " ";
	}
	
	for(int i = 0 ; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(*(p + i) > *(p + j)) {
				swap(*(p + i), *(p + j));
			}
		}
	}
	
	cout << endl << "Mang sau khi duoc sap xep:" << endl;
	
	for(int i = 0 ; i < n ; i++) {
		cout << *(p + i) << " ";
	}
	
	delete p;
	return 0;
}
