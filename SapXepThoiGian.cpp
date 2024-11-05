#include <iostream>

using namespace std;

struct Hour{
	int gio, phut, giay;
};

void nhap(Hour a[], int n) {
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i].gio >> a[i].phut >> a[i].giay;
	}
}

void sort(Hour a[], int n) {
	for(int i = 0 ; i < n ; i++) {
		for(int j = i+1 ; j < n; j++) {
			if(a[i].gio > a[j].gio){
				int tmp = a[i].gio;
				a[i].gio = a[j].gio;
				a[j].gio = tmp;
				
				int tmp1 = a[i].phut;
				a[i].phut = a[j].phut;
				a[j].phut = tmp1;
				
				int tmp2 = a[i].giay;
				a[i].giay = a[j].giay;
				a[j].giay = tmp2;
			} else if(a[i].gio == a[j].gio && a[i].phut > a[j].phut) {
				int tmp = a[i].gio;
				a[i].gio = a[j].gio;
				a[j].gio = tmp;
				
				int tmp1 = a[i].phut;
				a[i].phut = a[j].phut;
				a[j].phut = tmp1;
				
				int tmp2 = a[i].giay;
				a[i].giay = a[j].giay;
				a[j].giay = tmp2;
			} else if(a[i].gio == a[j].gio && a[i].phut == a[j].phut && a[i].giay > a[j].giay) {
				int tmp = a[i].gio;
				a[i].gio = a[j].gio;
				a[j].gio = tmp;
				
				int tmp1 = a[i].phut;
				a[i].phut = a[j].phut;
				a[j].phut = tmp1;
				
				int tmp2 = a[i].giay;
				a[i].giay = a[j].giay;
				a[j].giay = tmp2;
			}
		}
	}
}

void xuat(const Hour a[], int n) {
	for(int i = 0 ; i < n ; i++) {
		cout << a[i].gio << " " <<a[i].phut <<" " << a[i].giay << endl;
	}
}

int main() {
	int n;
	cin >> n;
	struct Hour a[n];
	
	nhap(a,n);
	sort(a,n);
	xuat(a,n);
}

