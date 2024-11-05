#include <iostream>
#include <cmath>
using namespace std;

bool checkBaUocSo(int number) {
    int count = 0;
    for (int i = 1; i <= sqrt(number); i++) {
        if (number % i == 0) {
            if (number / i == i) {
                count += 1;
            } else {
                count += 2;
            }
        }
    }
    return count == 3;
}

int main() {
	int n;
    cin >> n;
	int a[n], cnt = 0;
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i];
		if (checkBaUocSo(a[i])){
			cnt ++;
		} 
	}
    cout <<cnt;

    return 0;
}
