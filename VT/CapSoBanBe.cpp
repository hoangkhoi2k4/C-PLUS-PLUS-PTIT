#include <bits/stdc++.h>

using namespace std;

long long uoc(long long n){
	long long sum = 0;
	for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i; 
            }
        }
    }
	return sum + 1;
} 

int main(){
	int t; cin >> t;
	while(t--){
		long long n, m; cin >> n >> m;
		if(uoc(n) == m && uoc(m) == n){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
