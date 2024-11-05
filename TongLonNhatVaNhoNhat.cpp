#include <iostream>
#include <string>

using namespace std;

void tongNho(int a[], int b[], int n, int m) {
	long long s1 = 0, s2 = 0;
	for(int i = 0 ; i < n ; i++) {
		if(a[i] == 6){
			a[i] = 5;
		}
		s1 = s1*10 + a[i];
	}
	for(int i = 0 ; i < m ; i++) {
		if(b[i] == 6){
			b[i] = 5;
		}
		s2 = s2*10 + b[i];
	}
	
	cout << s1 + s2;
} 
void tongLon(int a[], int b[], int n, int m) {
	long long s1 = 0, s2 = 0;
	for(int i = 0 ; i < n ; i++) {
		if(a[i] == 5){
			a[i] = 6;
		}
		s1 = s1*10 +a[i];
	}
	for(int i = 0 ; i < m ; i++) {
		if(b[i] == 5){
			b[i] = 6;
		}
		s2 = s2*10 + b[i];
	}
	
	cout << s1 + s2;
} 


using namespace std;
int main() {
	int t;
	cin >>t;
	while(t--) {
		string a,b;
		cin >> a >> b;
		int n = a.size(), m = b.size();
		int s1[n], s2[m];
		for(int i = 0 ; i < n ; i++) {
			s1[i] = a[i] - '0';
		}
		for(int i = 0 ; i < m ; i++) {
			s2[i] = b[i] - '0';
		}
		tongNho(s1,s2,n,m);
		cout << " ";
		tongLon(s1,s2,n,m);
		cout << endl;
	}
	return 0;
}

