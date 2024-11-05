#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	long long a,i,SQRT;
	cin >> n;
	while(n--) {
		cin >> a;
		i = 2;
		SQRT = sqrt(a) + 1; // dung bien SQRT luu tru can cua a
		while(i < SQRT && a%i == 0) { // Truong hop i = 2 la so chan duy nhat la so nguyen to
			a = a/i;
			cout << i << " ";
		}
		i++; // tang i len 1 va thuc hien vong while tiep theo
		while(i < SQRT  && a!= 1) {
			while(a%i == 0) {
				a = a/i;
				
				cout << i << " ";
			}
			i = i + 2; // i la so le va bo qua cac so chan cho code thuc hien nhanh hon
		}
		if( a != 1) cout << a; // sau vong while thu 2 neu a khong chia het cho bat cu so nao nua va a la so nguyen to nen in a ra
		cout << endl;
	}
	return 0;
}

