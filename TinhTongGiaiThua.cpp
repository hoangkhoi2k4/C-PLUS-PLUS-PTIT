#include <iostream>
using namespace std;

long long giaiThua(unsigned long long n){
	if(n == 1 || n == 0) {
		return 1;
	} else return n*giaiThua(n-1);
}

int main(){
	unsigned long long n, sum = 0 ;
	cin >> n;
	for(unsigned long long i = 1; i <= n; i++) {
		sum += giaiThua(i);
	}
	
	cout << sum;
	return 0;
}

