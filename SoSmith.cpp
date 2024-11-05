#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int snt(int n){
	if(n < 2) return 0;
	else {
		for(int i = 2; i <= sqrt(n) + 1 ; i++) {
			if(n % i == 0) {
				return 0;
				break;
			}
		}
		return 1;
	}
}

int tongchuso(int a) {
	int t = 0;
	while(a!= 0) {
		t = t + a %10;
		a/=10;
	}
	return t;
}

int main() {
	int n,a,b,dem,tong1,tong2,i,SQ;
	
	cin >> n;
	while(n--) {
		cin >> a;
		tong1 = 0;
		tong2 = 0;
		if(!snt(a)){
			tong1 = tongchuso(a);
			i = 2;
			SQ = sqrt(a);
			while(a!=1) {
				dem = 0;
				while(a%i ==0 && a!= 1) {
					dem++;
					a=a/i;
				}
				if(dem > 0) tong2 = tong2 + dem*tongchuso(i);
				i++;
			}
			if(tong1 == tong2) cout <<"YES";
			else cout << "NO";
		} else cout << "NO";
		cout << endl;
		
	}
	return 0;
}

