#include <iostream>

using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin , s);
		
		int n = s.size();
		long sum = 0, sum1 = 0;
		int a[n];
		int h = 0;
		for(int i = 0 ; i < n ; i++) {
			while(s[i] >= '0' && s[i] <= '9') {
				sum = sum*10 + (s[i] - '0');
				i++;
			}
			a[h] = sum;
			sum = 0;
			h++;
		}
		for(int i = 0 ; i < h; i++) {
			sum1 += a[i];
		}
		cout << sum1 << endl;
	}
}

